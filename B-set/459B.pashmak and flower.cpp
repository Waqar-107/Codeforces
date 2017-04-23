/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define inf 1000000007
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,d;

        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        d=a[n-1]-a[0];
        ll x=0, y=0;

        for(i=0;i<n;i++)
        {
            if(a[i]==a[0])
                x++;
            if(a[i]==a[n-1])
                y++;
        }

        if(a[0]==a[n-1])
        {
            x=(n-1)*n/2;
            cout<<d<<" "<<x;
        }

        else
        {
            cout<<d<<" "<<(x*y);
        }

        return 0;
}
//218B
