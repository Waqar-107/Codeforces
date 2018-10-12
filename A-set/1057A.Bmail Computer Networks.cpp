/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200050
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int parent[N];
vector<int> adj[N];

void dfs(int s,int p)
{
    parent[s]=p;
    for(int e : adj[s])
    {
        if(e!=p)
            dfs(e,s);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sf(n);
    for(i=2;i<=n;i++)
    {
        sf(m);

        adj[i].pb(m);
        adj[m].pb(i);
    }

    dfs(1,-1);

    stack<int> stk;
    while(1)
    {
        stk.push(n);
        n=parent[n];

        if(n==-1)break;
    }

    while(stk.size())
    {
        pf(stk.top());
        stk.pop();
    }

    return 0;
}
