/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000
#define S 100010
using namespace std;

vector<ll> adj[S];
ll n,m;


int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll u,v;

    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

  
    bool star=false;
    ll sum=0,sum2=0;
    for(i=1;i<=n;i++)
    {
        if(adj[i].size()==m)
            star=true;

        else if(adj[i].size()==1)
            sum++;

        else if(adj[i].size()==2)
            sum2++;
    }

    if(star)
    {
        cout<<"star topology";
        return 0;
    }

    if(sum==2 && sum2==n-2)
    {
        cout<<"bus topology";
        return 0;
    }

    if(sum2==n)
        cout<<"ring topology";

    else
        cout<<"unknown topology";

    return 0;
}
