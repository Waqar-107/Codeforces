/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 200010

using namespace std;

int color[N],tc;
bool vis[N];
vector<int> adj[N];

void dfs(int s,int p,int gp)
{
    stack<int> ss;
    vis[s]=1;

    for(int i=1;i<=tc;i++)
    {
        if(i!=p && i!=gp)
            ss.push(i);

        if(ss.size()==adj[s].size())
            break;
    }

    for(int i : adj[s])
    {
        if(!vis[i])
        {
            color[i]=ss.top();ss.pop();
            dfs(i,color[i],color[s]);
        }
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int u,v;

    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d%d",&u,&v);

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    tc=0;
    for(i=1;i<=n;i++)
    {
        k=adj[i].size();
        tc=max(tc,k+1);
    }

    color[1]=1;
    dfs(1,1,0);

    printf("%d\n",tc);
    for(i=1;i<=n;i++)
        printf("%d ",color[i]);

    return 0;
}
