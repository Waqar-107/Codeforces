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

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100100
#define inf 1e18

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	ll n, m, sum;

	sffl(n, m);

	vector<ll> a, b;

	ll x = 0;
	while (1)
	{
		x++;
		sum = ((x + 1)*x) / 2;

		if (sum <= n + m)
			continue;

		x--; break;
	}

	while (x > 0)
	{
		if (n >= x)
			a.pb(x), n -= x;

		else if (m >= x)
			b.pb(x), m -= x;

		else
			break;

		x--;
	}

	pf(a.size()); pfs("\n");
	for (ll e : a)
		pfl(e), pfs(" ");

	pfs("\n"); 
	pf(b.size()); pfs("\n");

	for (ll e : b)
		pfl(e), pfs(" ");

	pfs("\n");

	return 0;
}
