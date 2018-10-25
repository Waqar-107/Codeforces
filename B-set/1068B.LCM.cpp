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
#define N 1000005
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

	ll i, j, k;
	ll n, m;
	ll ans, b;

	sfl(b);
	ans = 0;

	//lcm(a,b)/a=ab/gcd(a,b)*a=b/gcd(a,b)
	//so number of distinct divisor of b will be ans
	for (i = 1; i*i <= b; i++)
	{
		if (b%i == 0)
		{
			if (i*i == b)
				ans++;
			else
				ans += 2;
		}
	}

	pfl(ans);

	return 0;
}
