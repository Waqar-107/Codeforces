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
#define nl printf("\n")
#define N 2050
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

#define M 1000000007

using namespace std;

int n, m;
ll dp[N][N];
vector<int> divisors[N];

ll solve(int len, int ends)
{
	//good sequence of length len, ending at ends
	if (len == 1) return dp[len][ends] = 1;
	if (len <= 0) return 0;

	if (dp[len][ends] != -1) return dp[len][ends];

	dp[len][ends] = 0;
	for (int e : divisors[ends])
		dp[len][ends] += solve(len - 1, e) % M;

	return dp[len][ends] % M;
}

int main()
{
	//freopen("in2.txt", "r", stdin);
	
	int i, j, k;
	
	memset(dp, -1, sizeof(dp));

	sff(n, m);
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j += i)
			divisors[j].pb(i);
	}

	ll cnt = 0;
	for (i = 1; i <= n; i++)
		cnt += solve(m, i);

	pfl(cnt % M);

	return 0;
}
