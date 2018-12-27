/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<string,int>

using namespace std;

int g[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int u,v;

    memset(g,0,sizeof(g));

    sff(n,m);
    for(i=1;i<n;i++)
    {
        sff(u,v);
        g[u]++;
        g[v]++;
    }

    int leaf=0;
    for(i=1;i<=n;i++)
    {
        if(g[i]==1)
            leaf++;
    }

    //we distribute the total weight to all the leaves
    //two of the rightmost nodes of the diameter is two leaves so we multiply with 2
    printf("%.10f", (m * 2.0)/leaf);

    return 0;
}
