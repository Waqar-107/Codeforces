
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

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1010
#define pp pair<int,int>
#define inf 10000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;

int x;
bool vis[N], in[N], out[N];
vector<pp> adj[N];
vector<pair<pp,int>> ans;

void dfs(int s, int d)
{
	vis[s] = 1;

	//there's a tap installed
	if (in[s] && !out[s])
	{
		pp a = { x,s };
		ans.push_back({ a,d });
	}

	for (pp e : adj[s])
	{
		if (!vis[e.first])
			dfs(e.first, min(e.second, d));
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v, w;
	
	memset(vis, 0, sizeof(vis));
	memset(in, 0, sizeof(in));
	memset(out, 0, sizeof(out));

	sff(n, m);
	for (i = 0; i < m; i++)
	{
		sff(u, v);
		sf(w);

		in[v] = 1;
		out[u] = 1;
		adj[u].push_back({ v,w });
	}

	vector<int> vc;
	for (i = 1; i <= n; i++)
	{
		if (out[i] && !in[i])
			vc.pb(i);
	}

	for (int e : vc)
	{
		x = e;
		if(!vis[e])
			dfs(e,inf);
	}

	n = ans.size();

	pf(n);
	for (i = 0; i < n; i++)
		printf("%d %d %d\n", ans[i].first.first, ans[i].first.second, ans[i].second);

	return 0;
}
