/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200110
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
#define pp pair<int,int>

using namespace std;

int a[N], pr[N];
bool vis[N];

class cmp
{
public:
    bool operator()(int a,int b){
        return pr[a]>pr[b];
    }
};

priority_queue<int,vector<int>,cmp> adj[N];

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int u,v;

    sf(n); vector<pp> vec;
    for(i=1;i<=n-1;i++)
    {
        sff(u,v);
        vec.push_back({u,v});
    }

    for(i=1;i<=n;i++)
        sf(a[i]), pr[a[i]]=i;

    if(a[1]!=1){
        pfs("No\n");
        return 0;
    }

    for(pp e : vec){
        adj[e.first].push(e.second);
        adj[e.second].push(e.first);
    }

    int match[n+1];
    queue<int> q;
    q.push(a[1]); match[1]=a[1];

    int p=2;
    memset(vis,0,sizeof(vis));

    while(!q.empty())
    {
        k=q.front(); q.pop();

        while(!adj[k].empty())
        {
            u=adj[k].top(); adj[k].pop();
            if(!vis[u])
            {
                q.push(u);
                match[p]=u;p++;
            }
        }

        vis[k]=1;
    }

    for(i=1;i<=n;i++)
    {
        if(a[i]==match[i])
            continue;
        else
        {
            pfs("No\n");
            return 0;
        }
    }

    pfs("Yes\n");

    return 0;
}
