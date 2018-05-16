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
#define N 300100
#define inf 100000000000
#define pp pair<int,int>

using namespace std;

int x, y, fx, fy;
int parent[N];
bool vis[N];
vector<int> adj[N];

void parentFinder(int s)
{
	vis[s] = 1;
	for (int e : adj[s]) 
	{
		if (!vis[e]) 
		{
			parent[e] = s;
			parentFinder(e);
		}
	}
}

void SetForbidden(int s)
{
	vis[s] = 1;
	if (!vis[parent[s]])
	{
		if (parent[s]==x)
			fx = s;

		SetForbidden(parent[s]);
	}
}

int subTreeSize(int s,int fr)
{
	vis[s] = 1;
	
	int cnt = 1;
	for (int e : adj[s])
	{
		if (e !=fr && !vis[e])
			cnt += subTreeSize(e, fr);
	}

	return cnt;
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, t;
	int u, v;

	scanf("%d%d%d", &n, &x, &y);
	for (i = 0; i < n - 1; i++)
	{
		scanf("%d%d", &u, &v);

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	//----------------------------------------
	//set fx and fy
	memset(vis, 0, sizeof(vis));
	memset(parent, 0, sizeof(parent));

	parentFinder(x);

	memset(vis, 0, sizeof(vis));
	fy = parent[y];
	SetForbidden(y);
	//----------------------------------------
	
	ll X, Y, Z;
	
	Z =(ll) n*(n - 1);

	memset(vis, 0, sizeof(vis));
	X = (ll)subTreeSize(x, fx);

	memset(vis, 0, sizeof(vis));
	Y = (ll)subTreeSize(y, fy);

	//cout << fx << " " << fy;nl
	//cout << X << " " << Y;nl
	printf("%I64d\n", Z - X*Y);

	return 0;
}
