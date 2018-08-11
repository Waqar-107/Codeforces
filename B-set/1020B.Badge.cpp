/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool done;
int vis[N];
vector<int> adj[N];

void dfs(int s)
{
    if(done) return;

    vis[s]=1;

    for(int e : adj[s])
    {
        if(!vis[e])
            dfs(e);
        else
        {
            pf(e);
            done=true;
            return;
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sf(n);
    for(i=1;i<=n;i++)
    {
        sf(m);
        adj[i].pb(m);
    }

    for(i=1;i<=n;i++)
    {
        done=false;
        memset(vis,0,sizeof(vis));
        dfs(i);
    }

    return 0;
}
