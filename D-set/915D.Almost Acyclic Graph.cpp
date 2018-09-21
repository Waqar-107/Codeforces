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
#include<list>
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
#define N 600
#define inf 1000000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int vis[N], shuru;
bool cycFound = 0;
set<int> adj[N];

stack<int> stk;
void getCycle(int s)
{
	if (cycFound) return;

	vis[s] = 1; stk.push(s);
	
	for (int e : adj[s])
	{
		if (cycFound) continue;

		if (vis[e] == 1) {
			cycFound = 1; shuru = e;
			return;
		}

		else if (!vis[e])
			getCycle(e);
	}

	if (cycFound) return;
	vis[s] = 2; stk.pop();
}

void dfs(int s)
{
	vis[s] = 1;
	for (int e : adj[s])
	{
		//cout << s << " " << e << " " << vis[e];nl
		if (vis[e] == 0)
			dfs(e);

		else if (vis[e] == 1) {
			cycFound = 1;
			return;
		}
	}

	vis[s] = 2;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v;

	sff(n, m);
	for (i = 0; i < m; i++)
	{
		sff(u, v);
		adj[u].insert(v);
	}

	memset(vis, 0, sizeof(vis));

	for (i = 1; i <= n; i++)
	{
		if (!vis[i] && !cycFound)
			getCycle(i);
	}

	if (!cycFound) { pfs("YES\n"); return 0; }

	vector<pp> edges;

	v = shuru;
	while (stk.size())
	{
		u = stk.top();

		edges.pb({ u,v });
		v = u; stk.pop();

		if (v == shuru)break;
	}

	/*for (pp e : edges)
		cout << e.first << " " << e.second << endl;*/

	for (pp e : edges)
	{
		adj[e.first].erase(e.second);
		memset(vis, 0, sizeof(vis));
		
		cycFound = 0;

		for (i = 1; i <= n; i++)
		{
			if (!vis[i] && !cycFound)
				dfs(i);
		}

		if (!cycFound) { pfs("YES\n"); return 0; }

		adj[e.first].insert(e.second);
	}

	pfs("NO\n");

	return 0;
}
