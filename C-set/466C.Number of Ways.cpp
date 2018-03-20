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
#include<sstream>
#include<string>
#include<time.h>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100010
#define inf 10000000
#define pp pair<int,int>

using namespace std;

ll a[N * 5];
int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	ll s = 0;

	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i], s += a[i];

	if (s % 3 || n<3)
	{
		cout << "0\n";
		return 0;
	}

	s /= 3;

	for (i = 1; i < n; i++)
		a[i] += a[i - 1];

	ll ans = 0, cnt = 0;
	for (i = 0; i < n - 1; i++)
	{

		if (a[i] == s * 2)
			ans += cnt;

		if (a[i] == s)
			cnt++;
	}

	cout << ans;

	return 0;
}
