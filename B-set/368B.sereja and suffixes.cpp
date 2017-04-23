#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,m;
        ll count=0;
        map<ll,ll> mp;

        cin>>n>>m;
        ll a[n],b[m],f[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;

            if(mp[a[i]]==1)
                count++;
        }

        for(i=0;i<n;i++)
        {
            f[i]=count;
            mp[a[i]]--;

            if(mp[a[i]]==0)
                count--;
        }

        for(i=0;i<m;i++)
            cin>>b[i];

        for(i=0;i<m;i++)
            cout<<f[b[i]-1]<<endl;

        return 0;
}
