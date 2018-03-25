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

ll mx;
ll dp[N * 2], mx_subTree[N * 2];
int child[N * 2];
bool vis[N * 2];
vector<int> adj[N*2];

ll pleasantness(int s)
{
	vis[s] = 1;
	
	mx_subTree[s] = -inf;
	for (int e : adj[s])
	{
		if (!vis[e])
		{
			dp[s] += pleasantness(e);
			child[s]++;
			mx_subTree[s] = max(mx_subTree[s], mx_subTree[e]);
		}
	}

	mx_subTree[s] = max(mx_subTree[s], dp[s]);
	return dp[s];
}

void dfs(int s,int p)
{
	vis[s] = 1;

	//if a node has more than 1 sub-tree's we can take a look
	//if we can take any two from them
	ll mx1 = -inf, mx2 = -inf;
	if (child[s] >= 2)
	{
		for (int e : adj[s])
		{
			if (e!=p)
			{
				if (mx1 <= mx_subTree[e])
					mx2 = mx1, mx1 = mx_subTree[e];

				else if (mx2 < mx_subTree[e])
					mx2 = mx_subTree[e];
			}
		}

		mx = max(mx, mx1 + mx2);
	}

	for (int e : adj[s])
	{
		if (!vis[e])
			dfs(e,s);
	}
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int t, m, n;
	int u, v, w;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%I64d", &dp[i]);

	for (i = 0; i < n - 1; i++)
	{
		scanf("%d%d", &u, &v);

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	memset(child, 0, sizeof(child));
	memset(vis, 0, sizeof(vis));
	pleasantness(1);

	/*check for impossible, any root must have 2 or more child*/
	//-----------------------------------------------------------------
	bool f = 0;
	for (i = 1; i <= n; i++)
	{
		if (child[i] >= 2)
		{
			f = 1;
			break;
		}
	}

	if (!f) { printf("Impossible\n"); return 0; }
	//-----------------------------------------------------------------

	mx = -inf;
	memset(vis, 0, sizeof(vis));
	dfs(1,-1);

	printf("%I64d\n", mx);

	return 0;
}
