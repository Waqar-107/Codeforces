#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200010
#define inf 100000000000

using namespace std;

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	cin >> n;

	int *a = new int[n];
	for (i = 0; i < n; i++)
		cin >> a[i];

	map<int, int> dp;

	int ans = 0, last=0;
	for (i = 0; i < n; i++)
	{
		k = a[i];
		dp[k] = dp[k - 1] + 1;

		if (ans < dp[k])
			ans = dp[k], last = k;
	}

	stack<int> st;
	for (i = n-1; i >= 0; i--)
	{
		if (a[i] == last)
			st.push(i + 1), last--;
	}
	
	cout << ans << endl;
	while (!st.empty())
		cout << st.top() << " ", st.pop();
		
	return 0;
}
