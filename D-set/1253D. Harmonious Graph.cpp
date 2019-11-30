/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 201010
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
#define pp pair<int,int>

using namespace std;

bool vis[N];
vector<int> adj[N];
int l, r;

void dfs(int s)
{
    vis[s] = true;

    l = min(l, s);
    r = max(r, s);

    for(int e : adj[s])
    {
        if(!vis[e])
            dfs(e);
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

        adj[u].pb(v);
        adj[v].pb(u);
    }

    memset(vis, 0, sizeof(vis));

    vector<pp> seg;
    for(i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            l = i, r = i;
            dfs(i);

            seg.pb({l, r});
        }
    }

    sort(seg.begin(), seg.end());

    int ans = 0;
    n = seg.size();
    l = seg[0].first, r = seg[0].second;

    for(i = 1; i < n; i++)
    {
        if(seg[i].first >= l && seg[i].first <= r)
            r = max(r, seg[i].second), ans++;

        else
            l = seg[i].first, r = seg[i].second;
    }

    pf(ans);

    return 0;
}
