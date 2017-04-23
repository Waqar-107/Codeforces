/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("in");
#define pi 3.1416

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m;
    ll u,v;
    ll min=inf,sum;

    cin>>n>>m;
    pp a[m];
    ll adj[n][n];

    memset(adj,0,sizeof(adj));

    map<ll,ll> road;

    for(i=0;i<m;i++)
    {
        cin>>u>>v;

        a[i]=make_pair(u,v);

        u--;v--;
        road[u]++;
        road[v]++;

        adj[u][v]=1;
        adj[v][u]=1;
    }

     /*for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             cout<<adj[i][j]<<" ";
         }cout<<endl;
     }*/

    for(i=0;i<m;i++)
    {
        u=a[i].first-1;
        v=a[i].second-1;

        for(j=0;j<n;j++)
        {
            //node found connected with both u and v
            if(adj[u][j]==1 && adj[v][j]==1)
            {
                sum=road[u]+road[v]+road[j]-6;
                if(sum<min)
                    min=sum;
            }
        }
    }

    if(min==inf)
        cout<<"-1"<<endl;

    else
        cout<<min<<endl;

    return 0;
}
