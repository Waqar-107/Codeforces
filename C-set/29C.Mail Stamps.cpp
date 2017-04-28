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

map<ll,vector<ll>> mp;
map<ll,ll> vis;

void dfs(ll source)
{
    if(vis[source])
        return;

    cout<<source<<" ";
    vis[source]=1;

    for(ll e : mp[source])
    {
        dfs(e);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,u,v;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>u>>v;
        mp[u].push_back(v);
        mp[v].push_back(u);

        vis[u]=0;vis[v]=0;
    }

    map<ll,vector<ll>> ::iterator p=mp.begin();
    ll idx;
    while(p!=mp.end())
    {
        if(p->second.size()==1)
        {
            idx=p->first;
            break;
        }

        p++;
    }

    dfs(idx);

    cin.clear();
    cin.ignore();
    cin.get();

    return 0;
}
