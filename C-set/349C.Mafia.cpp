/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100005
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m;
    ll high=0,low=0,mid, ans=1e10;

    sfl(n);

    ll a[n];
    for(i=0;i<n;i++)
        sfl(a[i]);

    sort(a,a+n,greater<int>());

    low=a[0];high=low*2;
    while(low<=high)
    {
        mid=(low+high)/2;

        //number of rounds are not enough
        if(mid<a[0])
        {
            low=mid+1;
            continue;
        }

        k=0;
        for(i=0;i<n;i++)
            k+=(mid-a[i]);

        //valid, now minimize it
        if(k>=mid)
        {
            ans=min(ans,mid);
            high=mid-1;
        }

        else
            low=mid+1;
    }

    pfl(ans);

    return 0;
}
