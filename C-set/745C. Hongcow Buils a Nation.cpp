/***from dust i have come, dust i will be***/

#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<map>
#include<algorithm>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000
#define N 1010

using namespace std;

int color[N];
vector<int> adj[N];
bool vis[N];

void dfs(int s, int c)
{
	if (vis[s])
		return;

	vis[s] = 1;
	for (int i : adj[s])
	{
		if (!vis[i])
		{
			color[i] = c;
			dfs(i, c);
		}
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v, w;

	scanf("%d%d%d", &n, &m, &k);

	int *g = new int[k];
	for (i = 0; i < k; i++)
		scanf("%d", &g[i]);
	
	for (i = 1; i <= n; i++)
		color[i] = 0, vis[i] = 0;

	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &u, &v);

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (i = 0; i < k; i++)
	{
		if (!vis[g[i]])
		{
			color[g[i]] = g[i];
			dfs(g[i], g[i]);
		}
	}

	map<int, int> mp;
	for (i = 1; i <= n; i++)
	{
		mp[color[i]]++;
	}
	
	j = mp[g[0]]; u = g[0];
	for (i = 1; i < k; i++)
	{
		if (mp[g[i]] > j)
			j = mp[g[i]], u = g[i];
	}
	
	mp[u] += mp[0];
	mp[0] = 0;

	ll cnt = 0;
	for (i = 0; i < k; i++)
	{
		j = mp[g[i]] * (mp[g[i]] - 1) / 2;
		cnt += j;
	}

	printf("%I64d\n", cnt-m);

	return 0;
}
