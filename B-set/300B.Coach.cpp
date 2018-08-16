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
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 55
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

int start;
int vis[N];
vector<int> adj[N];
vector<int> ans[20];

void dfs(int s)
{
	vis[s] = 1;
	for (int e : adj[s])
	{
		if (!vis[e])
		{
			ans[start].pb(e);
			dfs(e);
		}

		else if (vis[e] == 2)
		{
			pfs("-1");
			exit(0);
		}
	}
}

int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m;
	int u, v;

	sff(n, m);

	for (i = 0; i <m; i++)
	{
		sff(u, v);
		adj[u].pb(v);
		adj[v].pb(u);
	}

	memset(vis, 0, sizeof(vis));

	start = 1;
	for (i = 1; i <= n; i++)
	{
		if (!vis[i])
		{
			ans[start].pb(i);
			dfs(i);
			
			if (ans[start].size() > 3) {
				pfs("-1\n");
				return 0;
			}

			if (ans[start].size() >= 2)
			{
				for (int e : ans[start])
					vis[e] = 2;

				start++;
			}

			else
			{
				for (int e : ans[start])
					vis[e] = 0;

				ans[start].clear();
			}
		}
	}

	//put those in teams who do not have any choice of their own
	for (i = 1; i <= n; i++)
	{
		if (adj[i].empty())
		{
			for (j = 1; j <= n/3; j++)
			{
				//cout << i<<" "<<j<<" "<<ans[j].size();nl
				if (ans[j].size() != 3)
				{
					ans[j].pb(i);
					break;
				}
			}
		}
	}

	for (i = 1; i <= n / 3; i++)
	{
		if (ans[i].size() != 3) {
			pfs("-1\n");
			return 0;
		}
	}

	for (i = 1; i <= n / 3; i++)
		printf("%d %d %d\n", ans[i][0], ans[i][1], ans[i][2]);

	return 0;
}
