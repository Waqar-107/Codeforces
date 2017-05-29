/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        //freopen("in.txt","r",stdin);

        ll i,j,k;
        ll n,x;

        cin>>x>>n;
        ll a[n];
        map<ll,ll> mp;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i++)
        {
            if(mp[a[i]%x]==0)
            {
                mp[a[i]%x]++;
            }

            else
            {
                cout<<i+1<<endl;
                return 0;
            }
        }

        cout<<"-1";

        return 0;
}
