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
#define N 100100
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
#define pp pair<int,double>

using namespace std;

double ans = 0.0;
vector<int> adj[N];

void dfs(int s, int parent, double p, int len)
{
	//cout << s << " " << parent << " " << p << " " << len;nl
	bool f = 0; 
	
	if (adj[s].size() > 1) 
	{
		if (parent == -1)
			p /= adj[s].size();
		else
			p /= (adj[s].size() - 1);
	}
	
	for (int e : adj[s])
	{
		if (e != parent)
		{
			f = 1;
			dfs(e, s, p , len + 1);
		}
	}

	if (!f) {
		//cout << len << " " << p << " " << s;nl
		ans += (len*p);
	}
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v;

	sf(n);
	for (i = 0; i < n - 1; i++)
	{
		sff(u, v);

		adj[u].pb(v);
		adj[v].pb(u);
	}

	dfs(1, -1, 1.0, 0);
	printf("%.15f\n", ans);

	return 0;
}
