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
#define N 350
#define inf 100000000

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

int parent[N];
vector<int> adj[N];

class LCA
{
	int n;
	vector<int> euler, height, first, segTree;
public:

	LCA(int n)
	{
		this->n = n;

		//we shall use 1-indexing
		height.resize(n + 1);
		first.resize(n + 1);

		//in-order to make the vector one indexed
		euler.pb(-1);	

		dfs(1, -1, 1);

		//in query, when the range is out of query-range we return 0th node, so setting its height=inf
		height[0] = inf;	

		//note: segTree can't be of size 4*N where N is the node number. As we are using the tree on\
		euler traversal and there will be more than N nodes visited
		
		int x = euler.size() + 10;	//extra 10 for safety
		segTree.resize(x * 4);

		build(1, 1, euler.size() - 1);
	}

	//determines the euler path and the height of nodes
	//first[s] is for first occurance of node-s
	void dfs(int s, int p, int h)
	{
		height[s] = h;
		first[s] = euler.size();
		euler.pb(s);

		for (int e : adj[s])
		{
			if (e != p) {
				dfs(e, s, h + 1);
				euler.pb(s);
			}
		}
	}

	//for each node of the segment-tree, we keep track which vertex of the actual tree has the minimum value
	void build(int at, int l, int r)
	{
		if (l == r) {
			segTree[at] = euler[r];
			return;
		}

		int mid = (l + r) / 2;

		build(at * 2, l, mid);
		build(at * 2 + 1, mid + 1, r);

		int x = segTree[at * 2];
		int y = segTree[at * 2 + 1];

		if (height[x] <= height[y])
			segTree[at] = x;
		else
			segTree[at] = y;
	}

	int query(int at, int L, int R, int l, int r)
	{
		//we are now in the range L-R in the tree
		//we are given l-r as the query in the input

		//outta range
		if (r < L || R < l)
			return 0;

		//completely in the range
		if (l <= L && R <= r)
			return segTree[at];

		int mid = (L + R) / 2;

		int x = query(at * 2, L, mid, l, r);
		int y = query(at * 2 + 1, mid + 1, R, l, r);

		if (height[x] <= height[y])
			return x;

		else
			return y;
	}

	int getLCA(int u, int v)
	{
		int l = first[u];
		int r = first[v];

		if (l > r)
			swap(l, r);

		return query(1, 1, euler.size() - 1, l, r);
	}
};

void parentFinder(int s, int p)
{
	parent[s] = p;
	for (int e : adj[s])
	{
		if (e != p)
			parentFinder(e, s);
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

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

	vector<int> leaf;
	while (sf(k) != EOF) {
		leaf.pb(k);
	}

	parentFinder(1, -1);

	//1st leaf
	vector<int> ans;
	vector<int> temp;

	u = leaf[0];
	while (u != -1)
	{
		temp.pb(u);
		u = parent[u];
	}

	m = temp.size();
	for (i = m - 1; i >= 0; i--)
		ans.pb(temp[i]);

	m = leaf.size();

	LCA lca(n);
	for (i = 1; i < m; i++)
	{
		u = lca.getLCA(leaf[i], leaf[i - 1]);
		
		//traverse from leaf[i-1] to u, then from u to leaf[i]
		
		v = leaf[i - 1]; v = parent[v];

		while (v != u && v != -1)
		{
			ans.pb(v);
			v = parent[v];

			if (v == u || v == -1)break;
		}

		ans.pb(u);

		temp.clear();
		v = leaf[i];
		while (1)
		{
			temp.pb(v);
			v = parent[v];

			if (v == u || v == -1)break;
		}

		k = temp.size();
		for (j = k - 1; j >= 0; j--)
			ans.pb(temp[j]);
	}

	//from last leaf to root
	u = leaf.back(); u = parent[u];
	while (u != -1)
	{
		ans.pb(u);
		u = parent[u];
	}

	if (ans.size() != 2 * n - 1) { pfs("-1\n"); return 0; }

	for (int e : ans)
		pf(e);

	nl

	return 0;
}
