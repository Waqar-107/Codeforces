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
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100010
#define inf 100000000000
#define pp pair<int,int>

using namespace std;

bool cyc;
vector<int> adj[N];
bool vis[N];

void dfs(int s, int p)
{
	vis[s] = 1;

	for (int e : adj[s])
	{
		if (e != p && !vis[e])
			dfs(e, s);

		else if (e != p && vis[e])
			cyc = 1;
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v;

	scanf("%d%d", &n, &m);

	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &u, &v);

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	memset(vis, 0, sizeof(vis));

	int cnt = 0;
	for (i = 1; i <= n; i++)
	{
		cyc = 0;
		if (!vis[i])
		{
			dfs(i, -1);

			if (!cyc)
				cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}
