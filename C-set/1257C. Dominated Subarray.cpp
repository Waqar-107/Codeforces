/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200100
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(t);
    while(t--)
    {
        sf(n);

        for(i = 1; i <= n; i++)
            adj[i].clear();

        int a[n];
        for(i = 0; i < n; i++)
            sf(a[i]), adj[a[i]].pb(i + 1);

        int ans = 1000000000;
        for(i = 1; i <= n; i++)
        {
            if(adj[i].size() > 1)
            {
                for(j = 0; j < adj[i].size() - 1; j++)
                    k = adj[i][j + 1] - adj[i][j] + 1, ans = min(ans, k);
            }
        }

        if(ans == 1000000000)
            pf(-1);
        else
            pf(ans);
        nl;
    }

    return 0;
}
