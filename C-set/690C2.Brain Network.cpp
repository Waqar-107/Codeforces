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
#define N 100010
#define D(x) cout << #x " = " << (x) << endl

using namespace std;

int dp[N], diameter;
vector<int> adj[N];

void dfs(int s, int p)
{
	dp[s] = 1;
	for (int e : adj[s])
	{
		if (e == p)
			continue;

		dfs(e, s);
		diameter = max(diameter, dp[s] + dp[e]);
		dp[s] = max(dp[s], dp[e] + 1);
	}
}

int main()
{
	//freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m, cnt;
	int u, v;

	scanf("%d%d", &n, &m);
	for (i = 1; i <= m; i++)
	{
		scanf("%d%d", &u, &v);

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	memset(dp, 0, sizeof(dp));
	diameter = 0;

	dfs(1, -1);

	printf("%d\n", diameter - 1);

	return 0;
}
