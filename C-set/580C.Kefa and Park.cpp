/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define pi 3.1416

#define Size 100010
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

vector<ll> adj[Size];
bool vis[Size];
ll n,m,total=0;
ll cc[Size];

void dfs(ll s,ll sum)
{
    if(vis[s])
        return;

    vis[s]=1;

    if(cc[s])
        sum++;
    else
        sum=0;

    if(sum>m)
        return;

    if(s!=1 && adj[s].size()==1)
    {
        total++;
    }

    for(int i=0;i<adj[s].size();i++)
    {
        dfs(adj[s][i],sum);
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll u,v;

    memset(vis,0,sizeof(vis));

    cin>>n>>m;

    for(i=1;i<=n;i++)
        cin>>cc[i];

    for(i=0;i<n-1;i++)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,0);

    cout<<total;

    return 0;
}
