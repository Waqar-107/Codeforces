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
        ll n,m;
        ll min=0,max=0;

        cin>>n>>m;
        ll a[m],b[m];

        for(i=0;i<m;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }

        //minimum
        sort(a,a+m);
        ll pt=0;
        for(i=1;i<=n;i++)
        {
            min+=a[pt];
            a[pt]--;

            if(a[pt]==0)
                pt++;
        }

        //maximum
        sort(b,b+m,greater<ll>());
        pt=0;
        for(i=1;i<=n;i++)
        {
            max+=b[pt];
            b[pt]--;

            if(b[pt]<b[pt+1])
            {
                sort(b,b+m,greater<ll>());
            }
        }

        cout<<max<<" "<<min;

        return 0;
}
//218B
