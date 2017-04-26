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
        ll n,x;
        vector<ll> v;

        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        // disappointed if serving time< waiting time

        // t := time count
        ll s=0,t=a[0];
        for(i=1;i<n;i++)
        {
            if(t>a[i])
                s++;
            else
                t+=a[i];
        }

        cout<<n-s;

        return 0;

}
