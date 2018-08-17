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
#define N 3100
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

int g[N][N];
vector<int> adj[N];

int main()
{
	//freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m;
	int u, v;

	memset(g, 0, sizeof(g));

	sff(n, m);
	for (i = 0; i < m; i++)
	{
		sff(u, v);
		adj[u].pb(v);
		g[u][v] = 1;
	}

	ll ans = 0; int cnt;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i != j)
			{
				cnt = 0;
				//check if e can be considered as a junction
				for (int e : adj[i]) {
					if (e != i && e != j && g[e][j])
						cnt++;
				}

				//if we have n junctions there are C(n,2) ways to take them-> n!/(2!*(n-2)!)=(n!*(n-1)!*(n-2)!)/(2!*(n-2)!)
				//(n*(n-1))/2
				ans += (ll)((cnt*(cnt - 1)) / 2);
			}
		}
	}

	pfl(ans);

	return 0;
}
