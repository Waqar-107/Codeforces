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
#define N 200100
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

int a[N];
ll res, ans, sum[N];
vector<int> adj[N];

//considering vertex 1 as the root and acquiring the ans
void dfs(int s, int p, int d)
{
	res += d*(ll)a[s];
	sum[s] = a[s];

	for (int e : adj[s])
	{
		if (e != p)
		{
			dfs(e, s, d + 1);
			sum[s] += sum[e];
		}
	}
}

void dfs2(int s, int p)
{
	ans = max(ans, res);

	for (int e : adj[s])
	{
		if (e == p)continue;

		//if 'e' is the root of the tree then each nodes height of the sub-tree rooted at 'e' will\
		 decrease by 1, thus res will decrease by sum[e]
		res -= sum[e];
		sum[s] -= sum[e];		//previously we considered parent[e] = s, now we are considering parent[s]=e so we decrease sum[s]
		res += sum[s];			//res increases as height of nodes of tree rooted at 's' increases by 1
		sum[e] += sum[s];		//sum[e] increases for the same reason res increased

		dfs2(e, s);

		//restore previous values
		sum[e] -= sum[s];
		res -= sum[s];
		sum[s] += sum[e];
		res += sum[e];
	}
}
int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m;
	int u, v;

	sf(n);
	for (i = 1; i <= n; i++)
		sf(a[i]);

	for (i = 1; i < n; i++)
	{
		sff(u, v);

		adj[u].pb(v);
		adj[v].pb(u);
	}

	res = 0;
	dfs(1, -1, 0);

	ans = 0;
	dfs2(1, -1);

	pfl(ans);

	return 0;
}
