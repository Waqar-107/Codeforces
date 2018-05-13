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
#define N 200100
#define pp pair<ll,ll>
#define inf 1000000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n;
    ll x,y,m;

    sf(n);
    ll dp[n][3];

    for(i=0; i<n; i++)
    {
        sfl(dp[i][1]);

        dp[i][0]=dp[i][1]-1;
        dp[i][2]=dp[i][1]+1;
    }

    if(n<=2)
    {
        pf(0);
        return 0;
    }

    ll mn=inf,diff,cnt,g;
    bool f;

    for(i=0; i<3; i++)
    {
        //if i have dp[1][i] in final
        //then comparing with dp[0][0-2] we get 3 answers
        //and we check whether any of it is possible and if there are several possibles then minimize

        for(j=0; j<3; j++)
        {
            diff=dp[1][i]-dp[0][j];
            g=dp[1][i]; //current
            f=0;
            cnt=0;

            if(i!=1)
                cnt++;
            if(j!=1)
                cnt++;

            f=1;
            for(k=2; k<n; k++)
            {
                y=0;
                for(x=0; x<3; x++)
                {
                    //cout<<dp[k][x]<<" "<<g<<" "<<k<<" "<<x;nl
                    if(dp[k][x]-g==diff)
                    {
                        g=dp[k][x];
                        y++;

                        if(x!=1)
                            cnt++;

                        break;
                    }
                }

                //not a single matched
                if(!y)
                {
                    f=0;
                    break;
                }
            }

            if(f)
                mn=min(mn,cnt);
        }
    }

    if(mn!=inf)
        pfl(mn);
    else
        pf(-1);

    return 0;
}
