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
#define N 120
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool vis[N];
int g[N][N];
vector<pp> adj[N];

void dfs(int s, int color)
{
	vis[s] = 1;

	for (pp e : adj[s])
	{
		if (!vis[e.first] && e.second == color)
			dfs(e.first, color);
	}
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v, c;

	memset(g, 0, sizeof(g));

	sff(n, m);
	for (i = 0; i < m; i++)
	{
		sff(u, v); sf(c);

		adj[u].pb({ v,c });
		adj[v].pb({ u,c });
	}

	//-------------------------------------
	for (i = 1; i <= n; i++)
	{
		//with which of the vertices are connected through color j
		for (j = 1; j <= m; j++)
		{
			memset(vis, 0, sizeof(vis));
			dfs(i, j);

			for (k = 1; k <= n; k++)
			{
				if (i != k && vis[k])
					g[i][k]++, g[k][i]++;
			}
		}
	}
	//-------------------------------------

	int q;
	sf(q);

	while (q--)
	{
		sff(u, v);
		pf(g[u][v]/2);
	}
	
	return 0;
}
