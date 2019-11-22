/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
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

bool vis[N];
set<int> unvisited;
set<int> adj[N];

void bfs(int s)
{
    vis[s] = true;
    unvisited.erase(s);

    queue<int> q;
    q.push(s);

    queue<int> vec;

    while(!q.empty())
    {
        int u = q.front(); q.pop();
        for(int e : unvisited)
        {
            // check vis so that you do not insert same node over and over again
            if(!vis[e] && adj[u].find(e) == adj[u].end())
            {
                vec.push(e);
                q.push(e);
                vis[e] = true;
            }
        }

        while(!vec.empty())
            unvisited.erase(vec.front()), vec.pop();
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int u, v;

    sff(n, m);
    for(i = 0; i < m; i++)
    {
        sff(u, v);

        adj[u].insert(v);
        adj[v].insert(u);
    }

    for(i = 1; i <= n; i++)
        unvisited.insert(i);

    memset(vis, 0, sizeof(vis));

    int cnt = 0;
    for(i = 1; i <= n; i++)
    {
        if(!vis[i])
            cnt++, bfs(i);
    }

    pf(cnt - 1);

    return 0;
}

