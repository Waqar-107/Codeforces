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
#define N 1000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

vector<ll> po;
void compute_powers() 
{
	for (ll i = 5; i <= 1e18; i *= 5)
		po.pb(i);
}

ll koyta_zero(ll n)
{
	ll cnt = 0;
	for (ll i = 0; i < po.size(); i++)
	{
		if (n >= po[i])
			cnt += n / po[i];
	}

	return cnt;
}

int main()
{
	freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m;
	
	compute_powers();

	sfl(m);

	ll l = 1e18;
	ll hi = 1e18, lo = 1, mid;

	while (lo <= hi)
	{
		mid = (hi + lo) / 2;

		k = koyta_zero(mid);
		
		if (k == m)
		{
			l = min(l, mid);
			hi = mid - 1;
		}

		else if (k > m)
			hi = mid - 1;

		else
			lo = mid + 1;
	}

	ll r = 1;
	hi = 1e18, lo = 1;
	while (lo <= hi)
	{
		mid = (hi + lo) / 2;

		k = koyta_zero(mid);
		if (k == m)
		{
			r = max(r, mid);
			lo = mid + 1;
		}

		else if (k > m)
			hi = mid - 1;

		else
			lo = mid + 1;
	}
	
	if (l > r) {
		pfs("0");
		return 0;
	}

	pf(r - l + 1); pfs("\n");
	for (i = l; i <= r; i++)
		pfl(i);
		
	return 0;
}
