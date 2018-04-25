/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 5000
#define inf 1000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int cnt;
bool vis[N];
vector<pp> adj[N];

int dfs(int s)
{
    vis[s]=1;

    int mx=0, d;
    vector<int> temp;

    for(pp e : adj[s])
    {
        if(!vis[e.first])
        {
            d=dfs(e.first)+e.second;
            //cout<<s<<" "<<e.first<<" "<<d<<endl;
            mx=max(mx,d);
            temp.pb(d);
        }
    }

    for(int e : temp)
        cnt+=abs(mx-e);

    return mx;
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int u,v;

    sf(n);
    n=pow(2,n+1)-2;

    for(i=1;i<=n;i++)
    {
        sf(m);

        u=i+1;
        v=floor(u/2);

        adj[u].pb({v,m});
        adj[v].pb({u,m});
    }

    cnt=0;
    memset(vis,0,sizeof(vis));

    dfs(1);
    pf(cnt);

    return 0;
}

