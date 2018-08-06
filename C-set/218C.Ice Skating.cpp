/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 110
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int sz;
bool vis[N];
pp adj[N];

void dfs(int s)
{
    vis[s]=1;
    for(int i=1;i<=sz;i++)
    {
        //if x or y coords are same then we can move on it
        if(!vis[i] && (adj[s].first==adj[i].first || adj[s].second==adj[i].second))
            dfs(i);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int x,y;

    sf(n);
    for(i=1;i<=n;i++)
    {
        sff(x,y);
        adj[i]={x,y};
    }

    int ans=0; sz=n;
    memset(vis,0,sizeof(vis));

    for(i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            ans++;
            dfs(i);
        }
    }

    pf(ans-1);

    return 0;
}
