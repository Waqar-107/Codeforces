/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100
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

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m;

    sfl(n);

    ll hi=n, lo=1, x, y;
    ll ans=-1;

    while(lo<=hi)
    {
        k=(lo+hi)/2;

        //cout<<k<<" "<<hi<<" "<<lo;nl
        m=n;
        x=0;

        while(m)
        {
            //vasya eats k candies
            if(k>=m){
                x+=m;
                break;
            }

            else
                m-=k, x+=k;

            //petya eats the 10% of the remaining
            m=m-m/10;
        }

        //cout<<k<<" "<<x;nl

        if(x<n/2+n%2)
            lo=k+1;

        //this k is enough, update ans and try to minimize again
        else
        {
            if(ans==-1)
                ans=k;
            else
                ans=min(ans,k);

            hi=k-1;
        }
    }

    pfl(ans);

    return 0;
}
