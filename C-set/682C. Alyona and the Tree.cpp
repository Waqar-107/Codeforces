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
#define pp pair<int,ll>

using namespace std;

ll val[N]; int sz[N];
bool prune[N];
vector<pp> adj[N];

void dfs(int s, ll d)
{
	if (d > val[s])
	{
		prune[s] = 1;
		return;
	}

	//1...v.....u
	//from the root to a vertex we maintain the max distance

	/*if a path is 1->2->3
	*suppose from 2 to 3 e.second>e.second+d
	*if e.second aka dist(2,3)<val[3] then obviously dist(1,3)<val[3] as dist(1,3)=e.second+d
	*and if dist(2,3)>val[3] then who cares about dist(1,3) right?
	*/

	for (pp e : adj[s])
		dfs(e.first, max(e.second, e.second + d));
}

int subTreeSize(int s)
{
	int cnt = 0;
	for (pp e : adj[s])
		cnt += subTreeSize(e.first);

	sz[s] = 1 + cnt;
	return sz[s];
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int p, m, n;
	int u, v, w;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &val[i]);

	for (i = 2; i <= n; i++)
	{
		scanf("%d%d", &v, &w);
		adj[v].push_back({ i,w });
	}

	memset(prune, 0, sizeof(prune));
	dfs(1, 0);
	sz[1] = subTreeSize(1);

	k = 0;
	for (i = 1; i <= n; i++)
	{
		if (prune[i])
			k += sz[i];
	}

	printf("%d\n", k);

	return 0;
}
