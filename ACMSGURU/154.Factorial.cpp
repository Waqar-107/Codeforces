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

ll koyta_zero(ll n)
{
	ll p = 5, x;
	ll cnt = 0;
	while (1)
	{
		x = n / p; p *= 5; cnt += x;
		if (!x)return cnt;
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	ll n, m;
	ll hi, lo, mid, ans;

	sfl(m);

	ans = inf;
	hi = inf, lo = 1;
	while (lo <= hi)
	{
		mid = (hi + lo) / 2;

		n = koyta_zero(mid);
		//cout << mid << " " << n; nl;
		if (n > m)
			hi = mid - 1;

		else if (n < m)
			lo = mid + 1;

		else
			hi = mid - 1, ans = min(ans, mid);
	}

	if (ans != inf)
		pfl(ans);

	else
		pfs("No solution\n");

	return 0;
}
