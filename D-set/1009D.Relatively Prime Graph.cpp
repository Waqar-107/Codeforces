/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1055
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

int main()
{
    int i,j,k;
    int n,m;

    sff(n,m);

    if(m<n-1){
        pfs("Impossible");
        return 0;
    }

    vector<pp> ans;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(!m) break;

            if(__gcd(i,j)==1)
                ans.pb({i,j}), m--;
        }

        if(!m) break;
    }

    if(m)
        pfs("Impossible");

    else
    {
        pfs("Possible\n");
        for(pp e : ans)
            pff(e.first,e.second);
    }

    return 0;
}
