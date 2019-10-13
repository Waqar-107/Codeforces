/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
#define inf 1e18
#define mod 998244353

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
set<int> adj[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int u, v;

    sff(n, m);
    for(i = 0; i < m; i++)
    {
        sff(u, v);

        adj[u].insert(v);
        adj[v].insert(u);
    }

    // assign colors
    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(!color[j])
                break;
        }

        if(j == n + 1){
            pfs("-1\n");
            return 0;
        }

        color[j] = i;
        for(k = 1; k <= n; k++)
        {
            if(k != j && color[k] == 0 && adj[j].find(k) == adj[j].end())
                color[k] = i;
        }
    }

    vector<int> g[4];
    for(i = 1; i <= n; i++)
    {
        if(!color[i]){
            pfs("-1\n");
            return 0;
        }

        g[color[i]].pb(i);
    }

    // edge counting
    int cnt = 0;
    for(i = 1; i <= 3; i++)
    {
        for(j = i + 1; j <= 3; j++)
        {
            for(int v1 : g[i])
            {
                for(int v2 : g[j])
                {
                    if(adj[v1].find(v2) == adj[v1].end()){
                        pfs("-1");
                        return 0;
                    }

                    cnt++;
                }
            }
        }
    }

    if(cnt != m){
        pfs("-1");
        return 0;
    }

    for(i = 1; i <= n; i++)
        pf(color[i]), pfs(" ");

    return 0;
}
