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

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100001
#define pp pair<int,int>

using namespace std;

int a[N * 5];
bool vis[N * 5];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	memset(vis, 0, sizeof(vis));

	sort(a, a + n);

	k = n - 1; m = 0;
	for (i = k - 1; i >= 0; i--)
	{
		if (a[k] >= a[i] * 2)
			m++, k--;
	}

	if (n % 2)
	{
		if (m > n / 2)
			cout << (n / 2 + 1) << endl;
		else
			cout << (n - m) << endl;
	}

	else
	{
		if (m > n / 2)
			cout << (n / 2) << endl;
		else
			cout << (n - m) << endl;
	}

	return 0;
}
