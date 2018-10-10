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
#define N 1005
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

ll dp[4][N][N];
int arr[N][N];

int main()
{
	freopen("in2.txt", "r", stdin);
	
	int i, j, k;
	int n, m;
	ll a, b;

	memset(dp, 0, sizeof(dp));
	memset(arr, 0, sizeof(arr));

	sff(n, m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			sf(arr[i][j]);
	}

	//from (1,1) to (i,j) - to get max gain from starting to meeting place for lahub
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			dp[0][i][j] = max(dp[0][i][j - 1], dp[0][i - 1][j]) + arr[i][j];
	}
	
	//from (n,1) to (i,j) - to get max gain from starting to meeting place for lahubina
	for (i = n; i >= 1; i--)
	{
		for (j = 1; j <= m; j++)
			dp[1][i][j] = max(dp[1][i][j - 1], dp[1][i + 1][j]) + arr[i][j];
	}

	//gain from (i,j) to (n,m) for lahubs final path
	for (i = n; i >=1; i--)
	{
		//from (i,j) we would go to either (i+1,j) or (i,j+1)
		for (j = m; j >= 1; j--)
			dp[2][i][j] = arr[i][j] + max(dp[2][i + 1][j] , dp[2][i][j + 1]);
	}

	//from (i,j) to (1,m) for lahubinas final path
	for (i = 1; i <= n; i++)
	{
		//from (i,j) we will go to either (i-1,j) or (i,j+1)
		for (j = m; j >= 1; j--)
			dp[3][i][j] = arr[i][j] + max(dp[3][i - 1][j], dp[3][i][j + 1]);
	}

	ll mx = 0;
	for (i = 2; i < n; i++)
	{
		for (j = 2; j < m; j++)
		{
			a = dp[0][i - 1][j] + dp[2][i + 1][j] + dp[1][i][j - 1] + dp[3][i][j + 1];
			b = dp[0][i][j - 1] + dp[2][i][j + 1] + dp[1][i + 1][j] + dp[3][i - 1][j];

			mx = max(mx, max(a, b));
		}
	}
	
	pfl(mx);

	return 0;
}
