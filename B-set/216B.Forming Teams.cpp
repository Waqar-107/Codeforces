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
#include<sstream>
#include<string>
#include<time.h>
#include<unordered_set>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 110
#define inf 10000000
#define pp pair<int,int>

using namespace std;

bool vis[N];
int adj[N][N], cross[N], color[N];

void dfs(int s, int n, int c)
{
	color[s] = c;
	vis[s] = 1;

	for (int i = 1; i <= n; i++)
	{
		if (adj[s][i] && !vis[i])
			dfs(i, n, !c);

		else if (adj[s][i] && vis[i])
		{
			if (color[s] == color[i])
				cross[i] = 1;
		}
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int x, y;

	memset(color, 0, sizeof(color));
	memset(cross, 0, sizeof(cross));
	memset(vis, 0, sizeof(vis));
	memset(adj, 0, sizeof(adj));

	cin >> n >> m;
	for (i = 0; i < m; i++)
	{
		cin >> j >> k;
		adj[j][k] = adj[k][j] = 1;
	}

	for (i = 1; i <= n; i++)
	{
		if (!vis[i])
			dfs(i, n, 0);
	}

	int cnt = 0;
	for (i = 1; i <= n; i++)
	{
		if (cross[i])
			cnt++;
	}

	cnt /= 2; //cout << n - cnt;nl
	if ((n - cnt) % 2)
		cnt++;

	cout << cnt << endl;

	return 0;
}
