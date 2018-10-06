#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<list>
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
#define N 150
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<ll,int>

const ll M = 1000000007;

using namespace std;

ll k, d, n;
ll dp[N][2];
ll solve(ll rem, bool possible)
{
	//if any edge of length >= d has been taken then possible is true, that means there is a possibillity
	if (rem == 0 && possible) 
		return 1;
	
	if (rem < 0) 
		return 0;

	if (dp[rem][possible] != -1)
		return dp[rem][possible];

	dp[rem][possible] = 0;
	for (int i = 1; i <= k; i++) {
		if (i >= d)
			dp[rem][possible] += solve(rem - i, true) % M;
		else
			dp[rem][possible] += solve(rem - i, possible) % M;
	}

	return dp[rem][possible] % M;
}

int main()
{
	//freopen("in2.txt", "r", stdin);
	
	memset(dp, -1, sizeof(dp));

	sffl(n, k); sfl(d);

	//remaining length n, no edge>=d has been taken so\
	false sent as possibility
	pfl(solve(n, false));
	

	return 0;
}
