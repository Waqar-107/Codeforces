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
    ll w,v,isRail;
    edge(ll a,ll b,bool f)
    {
        v=a;
        w=b;
        isRail=f;
    }
};

//overload <
bool operator<(node a, node b)
{
    return a.cost>b.cost;
}
//---------------------------------------------------------components

//---------------------------------------------------------variables and containers
ll n,m,cr=0;
ll dist[100010];
bool train[100010];
vector<edge> adj[100010];
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
                if(e.isRail)
                    train[e.v]=1;

                dist[e.v]=u.cost+e.w;
                pq.push(node(e.v,dist[e.v]));
            }

            if(dist[e.v]==u.cost+e.w && train[e.v] && !e.isRail)
            {
                train[e.v]=0;
                dist[e.v]=u.cost+e.w;
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

        cin>>n>>m>>k;

        for(i=1;i<=m;i++)
        {
            cin>>s>>e>>w;

            adj[e].push_back(edge(s,w,0));
            adj[s].push_back(edge(e,w,0));
        }

        for(i=1;i<=k;i++)
        {
            cin>>e>>w;

            adj[e].push_back(edge(1,w,1));
            adj[1].push_back(edge(e,w,1));
        }

        memset(train,0,sizeof(train));
        dijkstra(1);

        ll count=0;
        for(i=1;i<=n;i++)
        {
            if(train[i])
                count++;
        }

        cout<<(k-count);

        return 0;
}
