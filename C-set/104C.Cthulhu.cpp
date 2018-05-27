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
#define N 110


#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int sz;
bool vis[N];
vector<int> adj[N];

void dfs(int s)
{
    sz++;
    vis[s]=1;

    for(int e : adj[s])
    {
        if(!vis[e])
            dfs(e);
    }
}
int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int u,v;

    sff(n,m);
    for(i=0;i<m;i++)
    {
        sff(u,v);

        adj[u].pb(v);
        adj[v].pb(u);
    }

    if(n!=m){
        pfs("NO");
        return 0;
    }

    dfs(1);

    if(sz!=n)
        pfs("NO");
    else
        pfs("FHTAGN!");

    return 0;
}
