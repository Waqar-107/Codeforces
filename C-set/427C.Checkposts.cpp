/***from dust i have come, dust i will be***/
//strongly connected component

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 100010
#define mod 1000000007

using namespace std;

ll total,mult,val[N];
bool vis[N];
stack<ll> ss;
vector<ll> x;
vector<ll> adj[N*3];
vector<ll> adj2[N*3];

void dfs(ll s)
{
    vis[s]=1;

    for(int i : adj[s])
    {
        if(!vis[i])
            dfs(i);
    }

    ss.push(s);
}

void dfs2(ll s)
{
    vis[s]=1;
    x.push_back(s);

    for(int i : adj2[s])
    {
        if(!vis[i])
            dfs2(i);
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;
    ll u,v;
    ll count;

    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
        scanf("%I64d",&val[i]);

    scanf("%I64d",&m);

    for(i=0;i<m;i++)
    {
        scanf("%I64d%I6d",&u,&v);

        adj[u].push_back(v);
        adj2[v].push_back(u);
    }

    memset(vis,0,sizeof(vis));
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
            dfs(i);
    }

    total=0,mult=1;
    memset(vis,0,sizeof(vis));

    while(!ss.empty())
    {
        if(!vis[ss.top()])
        {
            x.clear();
            dfs2(ss.top());

            m=mod;count=0;
            for(i=0;i<x.size();i++)
                m=min(m,val[x[i]]);

            total+=m;

            for(i=0;i<x.size();i++)
            {
                if(val[x[i]]==m)
                    count++;
            }

            mult*=(count%mod);
        }

        ss.pop();
    }

    printf("%I64d %I64d",total,mult%mod);

    return 0;
}
