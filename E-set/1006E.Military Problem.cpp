/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200150
#define inf 1000000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int start[N], fin[N], mp[N];
vector<int> adj[N];

int t=1;
void dfs(int s)
{
    start[s]=t;
    mp[t]=s; t++;

    for(int e : adj[s])
        dfs(e);

    fin[s]=t;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,q;
    int u,v;

    sff(n,q);
    for(i=2;i<=n;i++)
    {
        sf(m);
        adj[m].pb(i);
    }

    memset(start,0,sizeof(start));
    memset(fin,0,sizeof(fin));
    memset(mp,0,sizeof(mp));

    dfs(1);

    while(q--)
    {
        sff(u,k);

        if(fin[u]-start[u]<k)
            pf(-1);
        else
            pf(mp[start[u]+k-1]);
    }

    return 0;
}
