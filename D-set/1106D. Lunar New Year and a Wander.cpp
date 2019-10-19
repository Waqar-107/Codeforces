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
#define pp pair<ll, ll>

using namespace std;

bool vis[N];
vector<int> adj[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int u, v;

    sff(n, m);
    for(i = 0;i < m; i++)
    {
        sff(u, v);

        if(u == v) continue;

        adj[u].pb(v);
        adj[v].pb(u);
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);

    memset(vis, 0, sizeof(vis));

    while(!pq.empty())
    {
        k = pq.top();
        pq.pop();

        if(vis[k])
            continue;

        vis[k] = true;

        pf(k), pfs(" ");
        for(int e : adj[k])
            pq.push(e);
    }

    return 0;
}
