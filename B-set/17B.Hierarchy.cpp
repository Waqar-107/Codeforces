/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1050
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

set<int> adj[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int u,v,w;

    sf(n);

    //qualification not required at all
    for(i=0;i<n;i++)
        sf(k);

    sf(m);
    while(m--)
    {
        sff(u,v);
        sf(w);

        adj[v].insert(w);
    }

    ll ans=0;
    m=0;

    for(i=1;i<=n;i++)
    {
        if(adj[i].size())
        {
            auto itr=adj[i].begin();
            ans+=(ll)(*itr);
        }

        else
            m++;
    }

    if(m==1)
        pfl(ans);
    else
        pf(-1);

    return 0;
}
