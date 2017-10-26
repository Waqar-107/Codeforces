/***from dust i have come, dust i will be***/

#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<algorithm>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000
#define N 100010

using namespace std;

int color[N];
bool vis[N];
vector<int> adj[N];
bool bp = 1;

void dfs(int s)
{
	if (!bp)
		return;

	for (int e : adj[s])
	{
		if (!vis[e])
		{
			vis[e] = 1;
			color[e] = !color[s];
			dfs(e);
		}

		else
		{
			if (color[e] == color[s])
			{
				bp = 0;
				return;
			}
		}
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v, w;

	scanf("%d%d", &n, &m);

	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &u, &v);

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (i = 1; i <= n; i++)
		color[i] = -1, vis[i] = 0;

	for (i = 1; i <= n; i++)
	{
		if(!vis[i])
		{ 
			color[i] = 1;
			dfs(i);
		}

		if (!bp)
		{
			printf("-1\n");
			return 0;
		}
	}

	vector<int> white;
	vector<int> black;

	for (i = 1; i <= n; i++)
	{
		if (color[i] == 0 && adj[i].size() > 0)
			white.push_back(i);

		else if (color[i] == 1 && adj[i].size() > 0)
			black.push_back(i);
	}

	printf("%d\n", white.size());
	for (i = 0; i < white.size(); i++)
		printf("%d ", white[i]);

	printf("\n");

	printf("%d\n", black.size());
	for (i = 0; i < black.size(); i++)
		printf("%d ", black[i]);


	return 0;
}
