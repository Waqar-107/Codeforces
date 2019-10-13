/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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
vector<int> color[N];

ll sum;
int a[] = {0, 1, 2};
int ans[N];

void dfs(int s, int p, int c)
{
    sum += color[s][a[c]];
    ans[s] = a[c] + 1;

    for(int e : adj[s])
    {
        if(e != p)
            dfs(e, s, (c + 1) % 3);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int u, v;

    sf(n);
    for(i = 0; i < 3; i++)
    {
        for(j = 1; j <= n; j++)
            sf(m), color[j].pb(m);
    }

    for(i = 1; i < n; i++)
    {
        sff(u, v);

        adj[u].pb(v);
        adj[v].pb(u);
    }

    int src;
    for(i = 1; i <= n; i++)
    {
        if(adj[i].size() == 1)
            src = i;

        if(adj[i].size() > 2)
        {
            pf(-1);
            return 0;
        }
    }

    ll mn = 1e18;
    vector<int> ans2;
    do{
        sum = 0;
        dfs(src, -1, 0);

        if(mn > sum)
        {
            mn = sum;
            ans2.clear();
            for(j = 0; j < 3; j++)
                ans2.pb(a[j]);
        }

    }while(next_permutation(a, a + 3));

    pfl(mn); nl;

    a[0] = ans2[0], a[1] = ans2[1], a[2] = ans2[2];
    dfs(src, -1, 0);

    for(i = 1; i <= n; i++)
        pf(ans[i]), pfs(" ");

    return 0;
}
