/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200000
#define inf 1e6

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

vector<int> adj[N];

void dfs(int s, int p)
{
    pf(s); pfs(" ");
    for(int e : adj[s])
    {
        if(e != p)
            dfs(e, s);
    }
}

class DisjointSetUnion
{
	int n;
	int *p, *r;
public:
	DisjointSetUnion(int n)
	{
		this->n = n;
		p = new int[n + 1];
		r = new int[n + 1];

		for (int i = 0; i <= n; i++)
			r[i] = 1, p[i] = i;
	}

	void Union(int a,int b)
	{
		int x = Find(a);
		int y = Find(b);

		if (r[x] > r[y])
		{
			p[y] = x;
			r[x] += r[y];
		}

		else
		{
			p[x] = y;
			r[y] += r[x];
		}
	}

	int Find(int x)
	{
		if (p[x] == x)
			return x;

		return p[x] = Find(p[x]);
	}
};

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int u, v;

    sf(n);
    DisjointSetUnion dsu(n);

    for(i = 1; i <= n - 1; i++)
    {
        sff(j ,k);

        u = dsu.Find(j);
        v = dsu.Find(k);

        adj[u].pb(v);
        adj[v].pb(u);

        dsu.Union(u, v);
    }

    dfs(1, -1);

    return 0;
}
