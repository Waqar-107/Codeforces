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
#define N 100100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int cnt;
bool vis[N];
vector<int> adj[N];

int dfs(int s)
{
    vis[s]=1;

    int k,x=0;
    bool f=1;
    for(int e : adj[s])
    {
        if(!vis[e])
        {
            f=0, k=dfs(e);
//cout<<k<<" "<<s;nl
            //if odd
            if(k%2)
                x+=k;
        }
    }

    //if leaf
    if(f)
        return 1;

    x++;
    if(x%2==0)
    {
        cnt++;//cout<<s<<" r "<<x;nl
        return 0;
    }

    return x;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int u,v;

    sf(n);
    for(i=1;i<n;i++)
    {
        sff(u,v);

        adj[u].pb(v);
        adj[v].pb(u);
    }

    if(n%2)
    {
        pfs("-1");
        return 0;
    }

    cnt=0;
    memset(vis,0,sizeof(0));
    dfs(1);

    pf(cnt-1);

    return 0;
}
