/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define ppp pair<ll,pp>
#define dbg printf("x");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    ll i,j,k;
    ll n,idx=-1;
    ll l=0,r=0;

    cin>>n;
    ll a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        l+=a[i];r+=b[i];
    }

    ll L=abs(l-r);
    ll x,y;

    for(i=0;i<n;i++)
    {
        x=l-a[i]+b[i];
        y=r-b[i]+a[i];

        if(abs(x-y)>L)
        {
            idx=i;L=abs(l-r);
        }
    }

    cout<<idx+1;

    return 0;

}
