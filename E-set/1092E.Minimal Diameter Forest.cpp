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
#include<sstream>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1100
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int vis[N];
int parent[N], dist[N];
vector<int> adj[N];
vector<int> path;

//tree diameter running bfs twice
pp getTreeDiameter(int s)
{
	int a, b;
	queue<int> q;

	//run bfs from src. let the last vertex in the queue would be 'a'
	q.push(s);
	vis[s] = 1;

	while (!q.empty())
	{
		a = q.front();
		q.pop();

		for (int e : adj[a])
		{
			if (!vis[e])
				q.push(e), vis[e] = 1;
		}
	}

	//now run bfs from node 'a'. let the last vertex be 'b' 
	q.push(a);
	vis[a] = 2;

	parent[a] = -1;
	dist[a] = 0;

	while (!q.empty())
	{
		b = q.front();
		q.pop();
		
		for (int e : adj[b])
		{
			if (vis[e] == 1)
				q.push(e), vis[e] = 2, dist[e] = dist[b] + 1, parent[e] = b;
		}
	}

	path.clear();

	int u = b;
	while (true)
	{
		path.pb(u);
		u = parent[u];

		if (u == -1)break;
	}
	
	return { dist[b], path[path.size() / 2] };
}

int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m;
	int u, v;

	sff(n, m);

	for (i = 1; i <= m; i++)
	{
		sff(u, v);

		adj[u].pb(v);
		adj[v].pb(u);
	}

	memset(vis, 0, sizeof(vis));
	memset(parent, 0, sizeof(parent));
	memset(dist, 0, sizeof(dist));

	vector<pp> vec, ans;

	for (i = 1; i <= n; i++)
	{
		if (!vis[i])
			vec.pb(getTreeDiameter(i));
	}

	sort(vec.begin(), vec.end(), greater<pp>());
	
	u = vec[0].second;
	for (i = 1; i < vec.size(); i++)
	{
		v = vec[i].second;

		ans.pb({ u,v });

		adj[u].pb(v);
		adj[v].pb(u);
	}

	memset(vis, 0, sizeof(vis));
	memset(parent, 0, sizeof(parent));
	memset(dist, 0, sizeof(dist));
	
	pp  t = getTreeDiameter(1);
	pf(t.first); pfs("\n");
	for (pp e : ans)
		pff(e.first, e.second), pfs("\n");

	return 0;
}
