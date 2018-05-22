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

#define dbg printf("in\n");
#define nl printf("\n");
#define N 510
#define pp pair<int,int>
#define D(x) cout << #x " = " << (x) << endl

using namespace std;

int l, r;
bool vis[N];
vector<pp> adj[N];

void dfs(int s)
{
	vis[s] = 1;
	for (pp e : adj[s])
	{
		//cout << s << " " << e.second<<" "<<e.first;nl
		if (!(e.second>=l && e.second<=r) && !vis[e.first])
			dfs(e.first);
	}
}

int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m, cnt;
	int u, v;

	scanf("%d%d", &n, &m);
	for (i = 1; i <= m; i++)
	{
		scanf("%d%d", &u, &v);

		adj[u].push_back({ v,i });
		adj[v].push_back({ u,i });
	}

	scanf("%d", &k);
	while (k--)
	{
		scanf("%d%d", &l, &r);

		cnt = 0;
		memset(vis, 0, sizeof(vis));

		for (i = 1; i <= n; i++)
		{
			if (!vis[i]) {
				cnt++;
				dfs(i);
			}
		}

		printf("%d\n", cnt);
	}

	return 0;
}
