#include<bits/stdc++.h>
typedef long long int ll;
#define pair<ll,ll> pii
using namespace std;
int main()
{
        ll i,j,k;
        ll n,count=0,x;

        cin>>n>>k;
        ll a[n+2];

        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        a[0]=a[n+1]=k;

        for(i=0;i<=n;i++)
        {
            if(a[i]+a[i+1]<k)
            {
                x=abs((a[i]+a[i+1])-k);
                count+=x;

                a[i+1]=k-a[i];
            }
        }

        cout<<count<<endl;

        for(i=1;i<=n;i++)
            cout<<a[i]<<" ";

        return 0;
}
