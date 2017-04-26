/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

vector<ll> adj[50010];
bool vis[50010];
ll parent[50010];
ll n,r1,r2;

void dfs(ll s,ll p)
{
    if(!vis[s])
    {
        vis[s]=1;
        parent[s]=p;//cout<<s<<" "<<parent[s]<<endl;
        for(ll e:adj[s])
        {
            dfs(e,s);
        }
    }

    else
        return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    //freopen("in.txt","r",stdin);

    ll i,j,k;
    memset(parent,-1,sizeof(parent));
    memset(parent,0,sizeof(vis));

    cin>>n>>r1>>r2;

    j=1;
    for(i=0;i<n-1;i++)
    {
        cin>>k;

        if(j==r1)
            j++;

        adj[j].push_back(k);
        adj[k].push_back(j);
        j++;
    }

    dfs(r2,0);

    for(i=1;i<=n;i++)
    {
        if(i!=r2)
            cout<<parent[i]<<" ";
    }

    cin.clear();
    cin.ignore();
    cin.get();

    return 0;
}
