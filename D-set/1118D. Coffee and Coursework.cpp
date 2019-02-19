/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100
#define inf 1e18

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
#define pp pair<ll,ll>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m;
    ll sum=0;

    sffl(n,m);

    ll a[n];
    for(i=0; i<n; i++)
        sfl(a[i]), sum+=a[i];

    sort(a,a+n,greater<ll>());

    //not possible even if i drink a cup each day
    if(sum<m)
    {
        pf(-1);
        return 0;
    }

    ll ans=n, hi=n, lo=1, mid, sub;
    ll x,y;

    while(lo<=hi)
    {
        mid=(lo+hi)/2;

        //check if mid days are possible
        //if no then increase lo, else decrease high
        //first mid coffees in first, 2nd mids in second
        sum=0;
        sub =0;
        x=0;

        for(i=0;i<n;i++)
        {
            if(x == mid)
                sub++, x=0;

            x++;
            sum += max((ll)0, a[i]-sub);
        }

        if(sum>=m){
            ans = min(mid,ans);
            hi = mid - 1;
        }

        else
            lo = mid + 1;
    }

    pfl(ans);

    return 0;
}
