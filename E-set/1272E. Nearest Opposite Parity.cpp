/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
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

int a[N], ans[N];
int dist[N][2];
vector<pp> adj[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    queue<pp> q;

    sf(n);
    for(i = 1; i <= n; i++)
    {
        sf(a[i]);
        q.push({i, a[i] % 2});

        dist[i][a[i] % 2] = 0;
        dist[i][1 - a[i] % 2] = inf;
    }

    for(i = 1; i <= n; i++)
    {
        // add edge to opposite parity
        if(i + a[i] <= n)
            adj[i + a[i]].pb({i, 1 - a[i] % 2});

        if(i - a[i] > 0)
            adj[i - a[i]].pb({i, 1 - a[i] % 2});
    }

    while(q.size())
    {
        pp u = q.front();
        q.pop();

        for(pp e : adj[u.first])
        {
            if(e.second != u.second) continue;
            if(dist[e.first][e.second] > 1 + dist[u.first][u.second])
            {
                q.push({e.first, e.second});
                dist[e.first][e.second] = 1 + dist[u.first][u.second];
            }
        }
    }

    for(i = 1; i <= n; i++)
    {
        if(dist[i][1 - a[i] % 2] == inf)
            pf(-1);
        else
            pf(dist[i][1 - a[i] % 2]);

        pfs(" ");
    }

    return 0;
}
