/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 105
#define inf 10000000000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool vis[N];
vector<int> adj[N];

void dfs(int s)
{
    vis[s]=1;
    for(int e : adj[s])
    {
        if(!vis[e])
            dfs(e);
    }
}

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int u,v;

    sf(n);

    int p[n];
    for(i=0;i<n;i++)
        sf(p[i]);


    for(i=1;i<=n;i++)
    {
        sf(m);
        u=i+m; v=i-m;

        if(u>0 && u<=n)
            adj[i].pb(u), adj[u].pb(i);

        if(v>0 && v<=n)
            adj[i].pb(v), adj[v].pb(i);
    }

    for(i=0;i<n;i++)
    {
        memset(vis,0,sizeof(vis));
        dfs(i+1);

        if(!vis[p[i]])
        {
            pfs("NO\n");
            return 0;
        }
    }

    pfs("YES\n");

    return 0;
}
