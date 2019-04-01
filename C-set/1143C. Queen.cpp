/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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

vector<int> adj[N];
int c[N];
set<int> ans;

void dfs(int s, int p)
{
    int cnt = 0;
    for(int e : adj[s])
    {
        if(e != p && c[e])
            cnt++;
    }

    if(c[s] && adj[s].size() == cnt + 1)
        ans.insert(s);

    for(int e : adj[s])
    {
        if(e != p)
            dfs(e, s);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int u, v;

    sf(n);
    for(u = 1; u <= n; u++)
    {
        sff(v, c[u]);

        if(v == -1)
            k = u;
        else
            adj[u].pb(v), adj[v].pb(u);
    }

    dfs(k, -1);

    if(ans.size() == 0)
        pf(-1);

    else
    {
        for(int e : ans)
            pf(e), pfs(" ");
    }

    return 0;
}
