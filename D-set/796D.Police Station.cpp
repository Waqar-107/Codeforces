/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100010
#define inf 1000000000
#define mod 1000003

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
#define pp pair<int,int>

using namespace std;

set<int> ans;
bool vis[N*3];
vector<pp> adj[N*3];

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m,d;
    int u,v;

    memset(vis,0,sizeof(vis));

    sff(n,k); sf(d);

    queue<int> q;
    for(i=0;i<k;i++)
        sf(m), q.push(m), vis[m]=1;

    for(i=1;i<n;i++)
    {
        sff(u,v);

        adj[u].pb({v,i});
        adj[v].pb({u,i});

        ans.insert(i);
    }


    while(!q.empty())
    {
        u=q.front(); q.pop();

        for(pp e : adj[u])
        {
            if(!vis[e.first])
            {
                q.push(e.first);
                ans.erase(e.second);
                vis[e.first]=1;
            }
        }
    }

    pf(ans.size()); pfs("\n");
    for(int e : ans)
        pf(e);


    return 0;
}
