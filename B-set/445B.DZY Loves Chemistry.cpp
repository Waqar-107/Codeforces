/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");
#define Size 500
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

vector<ll> adj[Size];
bool vis[Size];

void dfs(ll s)
{
    vis[s]=1;
    for(int i=0; i<adj[s].size(); i++)
    {
        if(!vis[adj[s][i]])
            dfs(adj[s][i]);
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;
    ll u,v;

    cin>>n>>m;

    if(n==1)
    {
        cout<<"1";
        return 0;
    }

    for(i=0; i<m; i++)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll x=0;
    memset(vis,0,sizeof(vis));
    for(i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            x++;
        }

    }

    cout<<(long long int)pow(2,n-x)<<endl;

    return 0;
}
