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
#define N 10010
#define inf 1000000000

using namespace std;

int n, m, cnt;
bool vis[N];
int rc[N], col[N];
vector<int> adj[N];

void dfs(int s)
{
	vis[s] = 1;

	if (col[s] != rc[s])
	{
		col[s] = rc[s]; cnt++;

		for (int e : adj[s])
		{
			if (!vis[e])
				col[e] = col[s];
		}
	}

	else
	{
		for (int e : adj[s])
		{
			if (!vis[e])
				col[e] = col[s];
		}
	}

	for (int e : adj[s])
	{
		if (!vis[e])
			dfs(e);
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int t, s;

	cnt = 0;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		scanf("%d", &m);

		adj[i].push_back(m);
		adj[m].push_back(i);
	}

	memset(vis, 0, sizeof(vis));
	memset(col, 0, sizeof(col));

	for (i = 1; i<=n; i++)
		scanf("%d", &rc[i]);

	dfs(1);
	printf("%d\n", cnt);

	return 0;
}
