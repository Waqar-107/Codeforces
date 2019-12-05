/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210
#define inf 2e18

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

int adj[N][N];
int vis[N], dist[N], n;

int getTreeDiameter(int s)
{
    int a, b;
    memset(dist, 0, sizeof(dist));

    queue<int> q;

    q.push(s);
    vis[s] = 1;

    while(!q.empty())
    {
        a = q.front();
        q.pop();

        for(int i = 1; i <= n; i++)
        {
            if(!vis[i] && adj[a][i])
                q.push(i), vis[i] = 1;
        }
    }

    // running bfs from a
    q.push(a);
    vis[a] = 2;

    while(!q.empty())
    {
        b = q.front();
        q.pop();

        for(int i = 1; i <= n; i++)
        {
            if(vis[i] == 1 && adj[b][i])
                q.push(i), vis[i] = 2, dist[i] = dist[b] + 1;
        }
    }

    return dist[b];
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int u, v;

    vector<pp> edges;
    memset(adj, 0, sizeof(adj));

    sf(n);
    for(i = 0; i < n - 1; i++)
    {
        sff(u, v);

        adj[u][v] = 1;
        adj[v][u] = 1;

        edges.pb({u, v});
    }

    int ans = 0;
    vector<int> temp;

    for(pp e : edges)
    {
        // remove the edge
        adj[e.first][e.second] = 0;
        adj[e.second][e.first] = 0;

        memset(vis, 0, sizeof(vis));
        for(i = 1; i <= n; i++)
        {
            if(!vis[i])
            {
                k = getTreeDiameter(i);
                temp.pb(k);
            }
        }

        ans = max(ans, temp[0] * temp[1]);
        temp.clear();

        adj[e.first][e.second] = 1;
        adj[e.second][e.first] = 1;
    }

    pf(ans);

    return 0;
}
