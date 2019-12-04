/***from dust i have come, dust i will be***/

/***
96-D : Volleyball

algorithm:
1. for each of the taxi we run Dijkstra's algorithm and determine
    which of the nodes can be visited by using this taxi.

2. we construct a graph from the info from 1, considering edges from a taxi to nodes that can be
    reached using only this taxi

3. finally we run Dijkstra from the source an on the newly constructed graph.
***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1010
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
#define pp pair<ll, int>

using namespace std;

int adj[N][N];
int adj2[N][N];
ll dist[N];
bool vis[N];

void Dijkstra(int src, int n)
{
    fill(dist, dist + N, inf);
    memset(vis, 0, sizeof(vis));

    priority_queue<pp, vector<pp>, greater<pp>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while(!pq.empty())
    {
        pp u = pq.top();
        pq.pop();

        // already visited
        if(vis[u.second])
            continue;

        for(int i = 1; i <= n; i++)
        {
            if(!adj[u.second][i]) continue;

            if(!vis[i] && dist[i] > (dist[u.second] + adj[u.second][i]))
            {
                dist[i] = dist[u.second] + adj[u.second][i];
                pq.push({dist[i], i});
            }
        }

        vis[u.second] = true;
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t, c;
    int u, v, w;
    int src, dest;

    sff(n, m);
    sff(src, dest);

    memset(adj, 0, sizeof(adj));
    for(i = 1; i <= m; i++)
    {
        sff(u, v);
        sf(w);

        if(adj[u][v])
            w = min(w, adj[u][v]);

        adj[u][v] = w;
        adj[v][u] = w;
    }

    for(i = 1; i <= n; i++)
    {
        sff(t, c);

        Dijkstra(i, n);
        for(j = 1; j <= n; j++)
        {
            if(i != j && dist[j] <= t)
                adj2[i][j] = c;
        }
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            adj[i][j] = adj2[i][j];
    }

    Dijkstra(src, n);

    if(dist[dest] >= inf)
        pf(-1);
    else
        pfl(dist[dest]);

    return 0;
}
