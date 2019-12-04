/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 101010
#define inf 1e9

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

struct edge
{
    int u, v, w;
    edge() {}
    edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

vector<pp> adj[N];
bool vis[N];
int dist[N];

void Dijkstra(int src)
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

        for(pp e : adj[u.second])
        {
            if(!vis[e.first] && dist[e.first] > dist[u.second] + e.second)
            {
                dist[e.first] = dist[u.second] + e.second;
                pq.push({dist[e.first], e.first});
            }
        }

        vis[u.second] = true;
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, src, l;
    int u, v, w;

    sff(n, m);
    sf(src);

    vector<edge> edges;
    for(i = 1; i <= m; i++)
    {
        sff(u, v);
        sf(w);

        adj[u].pb({v, w});
        adj[v].pb({u, w});

        edges.pb(edge(u, v, w));
    }

    sf(l);

    Dijkstra(src);

    int cnt = 0;

    // missiles that will make their way to a node
    for(i = 1; i <= n; i++)
    {
        if(dist[i] == l)
            cnt++;
    }

    // missiles that will make their way to an edge
    int x, y;
    for(edge e : edges)
    {
        u = e.u, v = e.v, w = e.w;
        if(dist[u] < l && dist[u] + w > l)
        {
            x = l - dist[u];
            y = w - x;

            if(dist[v] + y >= l)
                cnt++;

            // the middle of the edge is hit
            if(dist[v] + y == l)
                continue;
        }

        if(dist[v] < l && dist[v] + w > l)
        {
            x = l - dist[v];
            y = w - x;

            if(dist[u] + y > l)
                cnt++;
        }
    }

    pf(cnt);

    return 0;
}
