/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
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

vector<int> adj[N];
bool vis[N];
int best[N];
int ans = 0;

void dfs(int s)
{
    vis[s] = true;

    best[s] = 0;
    for(int e : adj[s])
    {
        if(!vis[e])
            dfs(e);

        best[s] = max(best[s], best[e] + 1);
    }

    best[s] = max(1, best[s]);
    ans = max(ans, best[s]);
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sff(n, k);

    vector<int> vec[n + 1];
    for(i = 1; i <= k; i++)
    {
        for(j = 1; j <= n; j++)
        {
            sf(m);
            vec[m].pb(j);
        }
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == j)
                continue;

            m = 0;
            for(int l = 0; l < k; l++)
            {
                if(vec[i][l] > vec[j][l])
                    m++;
                else
                    break;
            }

            if(m == k)
                adj[j].pb(i);
        }
    }

    memset(vis, 0, sizeof(vis));

    for(i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }

    pf(ans);

    return 0;
}
