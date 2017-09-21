#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 100010

using namespace std;

int color[N];
bool vis[N];
vector<int> adj[N];

bool dfs(int s,int c)
{
    vis[s]=1;

    for(int e : adj[s])
    {
        if(!vis[e])
        {
            color[e]=!c;
            dfs(e,color[e]);
        }
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,u,v;

    //n nodes
    scanf("%d",&n);

    for(i=0;i<n-1;i++)
    {
        scanf("%d%d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    memset(vis,0,sizeof(vis));
    memset(color,-1,sizeof(color));

    color[1]=0;
    dfs(1,0);

    ll w=0,b=0;
    for(i=1;i<=n;i++)
    {
        if(color[i])
            b++;
        else
            w++;
    }

    ll m=w*b;
    ll sub=m-(n-1);

    printf("%I64d",sub);

    return 0;
}
