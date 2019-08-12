/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
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

vector<int> adj[N];
bool vis[N];

void dfs(int s)
{
    vis[s] = true;
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
    int n, m, u, v;

    sff(n, k);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    u = -1;
    for(i = 0; i < n; i++)
    {
        if(!a[i])continue;

        if(u == -1)
            u = i + 1;
        else
        {
            adj[u].pb(i + 1);
            u = i + 1;
        }
    }

    for(i = 0; i < n; i++)
        sf(a[i]);

    u = -1;
    for(i = n - 1; i >= 0; i--)
    {
        if(!a[i])continue;

        if(u == -1)
            u = i + 1;
        else
        {
            adj[u].pb(i + 1);
            u = i + 1;
        }
    }

    memset(vis, 0, sizeof(vis));

    dfs(1);

    if(vis[k])
        pfs("YES");
    else
        pfs("NO");

    return 0;
}
