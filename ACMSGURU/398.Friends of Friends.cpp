/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100
#define inf 1000000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

set<int> adj[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int u,v;

    sff(n,m);
    for(u=1;u<=n;u++)
    {
        sf(k);
        while(k--){
            sf(v);

            adj[u].insert(v);
            adj[v].insert(u);
        }
    }

    set<int> ans;
    for(int e : adj[m])
    {
        //insert all the friends of e in ans
        auto itr=adj[e].begin();
        while(itr!=adj[e].end())
        {
            if(*itr!=m && adj[m].find(*itr)==adj[m].end())
                ans.insert(*itr);

            itr++;
        }
    }

    pf(ans.size());
    pfs("\n");

    for(int e : ans)
        pf(e);

    return 0;
}
