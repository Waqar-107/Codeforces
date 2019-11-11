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

vector<int> g[110];
vector<int> adj[N];
int cost[110][N];
bool vis[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, x;
    int u, v, s;

    sff(n, m);
    sff(k, s);

    for(i = 1; i <= n; i++)
        sf(x), g[x].pb(i);

    for(i = 0; i < m; i++)
    {
        sff(u, v);

        adj[u].pb(v);
        adj[v].pb(u);
    }

    for(i = 1; i <= k; i++)
    {
        fill(cost[i], cost[i] + N, inf);
        memset(vis, 0, sizeof(vis));

        queue<int> q;
        for(int e : g[i])
            cost[i][e] = 0, q.push(e), vis[e] = true;

        while(!q.empty())
        {
            u = q.front();
            q.pop();

            for(int e : adj[u])
            {
                if(!vis[e])
                {
                    cost[i][e] = 1 + cost[i][u];
                    vis[e] = true;
                    q.push(e);
                }
            }
        }
    }

    vector<int> vec;
    for(i = 1; i <= n; i++)
    {
        vec.clear();
        for(j = 1; j <= k; j++)
            vec.pb(cost[j][i]);

        sort(vec.begin(), vec.end());

        ll cnt = 0;
        for(j = 0;j < s; j++)
            cnt += vec[j];

        pfl(cnt), pfs(" ");
    }

    return 0;
}
