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
#define N 200100
#define inf 1000000000

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

int parent[N], dist[N];
vector<int> adj[N];

void dfs(int s, int p,int d)
{
	dist[s] = d;
	parent[s] = p;

	for (int e : adj[s])
	{
		if (e != p)
			dfs(e, s, d + 1);
	}
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v;

	sf(n);
	for (i = 1; i < n; i++)
	{
		sff(u, v);
		adj[u].pb(v);
		adj[v].pb(u);
	}

	memset(dist, 0, sizeof(dist));
	memset(parent, 0, sizeof(parent));

	dfs(1, -1, 0);

	set<pp> s;
	for (i = 1; i <= n; i++)
	{
		if (dist[i] > 2)
			s.insert({ -dist[i],i });
	}

	int ans = 0; pp temp;
	while (!s.empty())
	{
		auto itr = s.begin(); temp = *itr;
		
		u = temp.second; s.erase(itr);
		
		if (dist[u] <= 2) continue;

		v = parent[u];
		ans++;

		dist[v] = 1;
		for (int e : adj[v]) {
			dist[e] = 2;
		}
	}

	pf(ans);

	return 0;
}
