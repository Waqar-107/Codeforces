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
        //freopen("in.txt","r",stdin);
        ll i,j,k;
        ll n,count=0;

        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        count+=a[0];
        for(i=1;i<n;i++)
        {
            count+=((a[i]-1)*i)+a[i];
        }

        cout<<count;


        return 0;
}
