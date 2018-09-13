/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100100
#define inf 10000000000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<ll,ll>

using namespace std;

bool vis[N];
vector<int> adj[N];
vector<int> adj2[N];
stack<int> stk;

//sorted according to finishing time
void dfs(int s)
{
    vis[s]=1;
    for(int e : adj[s])
    {
        if(!vis[e])
            dfs(e);
    }

    stk.push(s);
}

ll cnt;
void dfs2(int s)
{
    vis[s]=1; cnt++;
    for(int e : adj2[s])
    {
        if(!vis[e])
            dfs2(e);
    }
}

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    sf(n);
    for(i=1;i<=n;i++)
    {
        sf(k);

        adj[i].pb(k);
        adj2[k].pb(i);
    }

    memset(vis,0,sizeof(vis));
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
            dfs(i);
    }

    vector<ll> vec;
    memset(vis,0,sizeof(vis));
    while(stk.size())
    {
        cnt=0;
        if(!vis[stk.top()])
            dfs2(stk.top()), vec.pb(cnt);

        stk.pop();
    }

    sort(vec.begin(),vec.end(),greater<ll>());

    if(vec.size()==1)
        cnt=vec[0]*vec[0];

    else
    {
        cnt=vec[0]+vec[1];
        cnt=cnt*cnt;

        for(i=2;i<vec.size();i++)
            cnt+=(vec[i]*vec[i]);
    }

    pfl(cnt);

    return 0;
}
