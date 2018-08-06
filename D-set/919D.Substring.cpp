/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 300110
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

int *color, dp[N][30];
bool vis[N];
string str;
vector<int> adj[N];

void dfs(int s)
{
    vis[s]=1;

    for(int e : adj[s])
    {
        if(!vis[e])
            dfs(e);

        for(int i=0;i<26;i++)
            dp[s][i]=max(dp[s][i],dp[e][i]);
    }

    dp[s][str[s-1]-'a']++;
}

void cycle(int s)
{
    color[s]=1;

    for(int e : adj[s])
    {
        if(!color[e])
            cycle(e);

        else if(color[e]==1)
        {
            pf(-1);
            exit(0);
        }

        else
            continue;
    }

    color[s]=2;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int u,v;

    sff(n,m);
    cin>>str;

    for(i=0; i<m; i++)
    {
        sff(u,v);
        adj[u].pb(v);
    }

    color=new int[n+1];
    fill(color,color+n+1,0);

    for(i=1; i<=n; i++)
    {
        if(!vis[i])
            cycle(i);
    }

    delete color;

    memset(vis,0,sizeof(vis));

    int ans=0;
    for(i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            for(j=0;j<26;j++)
                ans=max(ans,dp[i][j]);
        }
    }

    pf(ans);

    return 0;
}
