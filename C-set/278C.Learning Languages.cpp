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
#define N 210
#define inf 1000000000

using namespace std;

int n, m;
bool vis[N];
vector<int> adj[N];

void dfs(int s)
{
	vis[s] = 1;
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

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d",&k);

		while (k--)
		{
			scanf("%d", &t);
			adj[i + 1].push_back(n + t);
			adj[n + t].push_back(i + 1);
		}
	}

	memset(vis, 0, sizeof(vis));

	int cnt = 0;
	for (i = 1; i <= n ; i++)
	{
		//count the scc's
		if (!vis[i] && adj[i].size()>0)
		{
			cnt++;
			dfs(i);
		}
	}

	if(cnt>0)
		cnt--;

	for (i = 1; i <= n; i++)
	{
		if (!vis[i])cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}
