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
#define N 70
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m, mn=0;

	sfl(n);

	ll *a = new ll[n];
	for (i = 0; i < n; i++)
		sfl(a[i]);

	ll x[5], ans[5] = { 0 };
	for (i = 0; i < 5; i++)
		sfl(x[i]), mn = min(mn, x[i]);

	m = 0;
	for (i = 0; i < n; i++)
	{
		m += a[i];

		//try to take
		if (m >= mn)
		{
			for (j = 4; j >= 0; j--)
			{
				k = m / x[j];
				ans[j] += k;
				m -= (k*x[j]);
			}
		}
	}

	for (i = 0; i < 5; i++)
		pfl(ans[i]);

	pfs("\n");
	pfl(m);

	return 0;
}
