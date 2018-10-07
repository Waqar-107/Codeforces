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
#define N 10000001
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

int dp[N][4];

int main()
{
	//freopen("in2.txt", "r", stdin);
	int i, j, k;
	int n, m;

	sf(n);

	ll a, b, c, d, x;
	
	//in the first step i can go in either A,B or C but i won't reach D
	//so one way to reach A,B,C and 0 ways to reach D
	dp[1][0] = dp[1][1] = dp[1][2] = 1,  dp[1][3] = 0;
	for (i = 2; i <= n; i++)
	{
		a = dp[i - 1][0] % M; b = dp[i - 1][1] % M;
		c = dp[i - 1][2] % M; d = dp[i - 1][3] % M;

		//from B, C, D we can go to A
		x = b + c + d;
		dp[i][0] = x % M;

		//from A, C, D we can go to B
		x = a + c + d;
		dp[i][1] = x % M;

		//from A, B, D we can go to C
		x = a + b + d;
		dp[i][2] = x % M ;

		//from A, B, C we can go to D
		x = a + b + c;
		dp[i][3] = x % M;
	}

	pf(dp[n][3]);

	return 0;
}
