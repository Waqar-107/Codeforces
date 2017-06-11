/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>
typedef long long int ll;
#define inf 1000000000000000
using namespace std;

//---------------------------------------------------------components
//node
struct node
{
    ll At,cost;

    node(ll where, ll price)
    {
        At=where;
        cost=price;
    }
};

//edge
struct edge
{
    //weight and destination
    ll w,v;
    edge(ll a,ll b)
    {
        v=a;
        w=b;
    }
};

//overload <
bool operator<(node a, node b)
{
    return a.cost>b.cost;
}
//---------------------------------------------------------components

//---------------------------------------------------------variables and containers
ll n,m;
ll dist[100010];
vector<edge> adj[100010];
map<ll,ll> path;
priority_queue<node> pq;
//---------------------------------------------------------variables and containers

//---------------------------------------------------------Dijkstra
void dijkstra(ll s)
{
    for(int i=0;i<=n;i++)
        dist[i]=inf;

    //source
    dist[s]=0;
    pq.push(node(s,dist[s]));


    while(!pq.empty())
    {
        node u=pq.top();
        pq.pop();

        if(u.cost!=dist[u.At])
            continue;

        for(edge e : adj[u.At])
        {
            if(dist[e.v]>u.cost+e.w)
            {
                dist[e.v]=u.cost+e.w;
                path[e.v]=u.At;
                pq.push(node(e.v,dist[e.v]));
            }
        }
    }

}
//---------------------------------------------------------Dijkstra

int main()
{
        //freopen("in.txt","r",stdin);
        ll i,j,k;
        ll s,e,w;

        cin>>n>>m;

        for(i=1;i<=m;i++)
        {
            cin>>s>>e>>w;

            //this is an undirected graph.
            adj[e].push_back(edge(s,w));
            adj[s].push_back(edge(e,w));
        }

        //initialize the path map
        for(i=1;i<=n;i++)
            path[i]=-7;

        dijkstra(1);

        ll koiAsi=n;
        vector<ll> rasta;
        map<ll,bool> vis;
        bool ff=true;

        for(i=1;i<=n;i++)
            vis[i]=false;

        path[1]=1;
        while(true)
        {
            if(path[koiAsi]>=1 && path[koiAsi]<n  && vis[koiAsi]==false)
            {
                rasta.push_back(koiAsi);
                vis[koiAsi]=true;
                koiAsi=path[koiAsi];
            }

            else
                break;
        }

        if(dist[n]==inf)
        {
            cout<<"-1 "<<endl;
            return 0;
        }

        ll x=rasta.size();
        for(i=x-1;i>=0;i--)
            cout<<rasta[i]<<" ";

        return 0;
}
