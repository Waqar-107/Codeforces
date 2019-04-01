/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200100
#define inf 1e18

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
#define pp pair<int, int>

using namespace std;

int color[N];
vector<int> adj[N];

void bipartite(int s, int col)
{
    color[s] = col;

    for(int e : adj[s])
    {
        if(color[e] == -1)
            bipartite(e, 1 - col);

        else
        {
            if(color[e] == color[s])
            {
                pfs("NO\n");
                exit(0);
            }
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int u, v;

    sff(n, m);

    vector<pp> vec;
    for(i = 0; i < m; i++)
    {
        sff(u, v);

        adj[u].pb(v);
        adj[v].pb(u);

        vec.pb({u, v});
    }

    fill(color, color + N, -1);
    bipartite(1, 0);

    pfs("YES\n");
    for(i = 0; i < m; i++)
        pf(color[vec[i].first] < color[vec[i].second]);


    return 0;
}
