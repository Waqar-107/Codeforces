/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 100000007

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

int sz;
bool vis[N];
vector<int> adj[N];

void dfs(int s)
{
    vis[s] = true;
    sz++;

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
    int n, m;
    int u, v;

    sff(n, m);
    for(i = 0; i < m; i++)
    {
        sff(u, v);

        adj[u].pb(v);
        adj[v].pb(u);
    }

    int cnt = 0;
    for(i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            sz = 0;
            dfs(i);

            cnt += (sz - 1);
        }
    }

    pf(m - cnt);

    return 0;
}
