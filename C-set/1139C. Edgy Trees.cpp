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

ll mod = 1e9 + 7;
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

ll bigMod(ll a, ll p)
{
    if(p == 0)
        return 1;

    if(p & 1)
        return ((a % mod) * bigMod(a, p - 1)) % mod;

    ll temp = bigMod(a, p / 2);
    ll ret = (temp % mod * temp % mod) % mod;

    return ret;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j;
    int m, u, v, x;
    ll n, k;

    sffl(n, k);
    for(i = 0; i < n - 1; i++)
    {
        sff(u, v); sf(x);

        if(!x)
        {
            adj[u].pb(v);
            adj[v].pb(u);
        }
    }

    ll ans = bigMod(n, k);

    memset(vis, 0, sizeof(vis));
    for(i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            sz = 0;
            dfs(i);

            ans = ((ans % mod) - (bigMod(sz, k) % mod) + mod) % mod;
        }
    }

    pfl(ans);

    return 0;
}
