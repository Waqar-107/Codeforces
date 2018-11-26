/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100100

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
int d[N];
vector<int> adj[N];

int dfs(int s)
{
    vis[s]=1;

    int cnt=0;
    for(int e : adj[s])
    {
        if(!vis[e])
            cnt+=dfs(e);
    }

    if(!cnt)
    {
        d[cnt+1]++;
        return cnt+1;
    }

    d[cnt]++;
    return cnt;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sf(n);
    for(i=2;i<=n;i++)
    {
        sf(m);

        adj[m].pb(i);
        adj[i].pb(m);
    }

    memset(vis,0,sizeof(vis));
    memset(d,0,sizeof(d));

    dfs(1);

    j=1;
    int ans[n+1];
    for(i=1;i<=n;i++)
    {
        while(d[i]--)
        {
            ans[j]=i;
            j++;
        }
    }

    for(i=1;i<=n;i++)
        pf(ans[i]), pfs(" ");

    return 0;
}
