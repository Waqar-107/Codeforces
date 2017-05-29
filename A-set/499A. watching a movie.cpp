/**from dust i have come, dust i will be **/
#include<bits/stdc++.h>
typedef long long int ll;
#define pp pair<ll,ll>
using namespace std;

int main()
{
        ll i,j,k;
        ll n,x;
        ll s,e,count=0;

        cin>>n>>x;
        pp a[n];

        for(i=0;i<n;i++)
        {
            cin>>s>>e;
            a[i]=make_pair(s,e);
        }

        ll ag=1;
        for(i=0;i<n;i++)
        {
            while(ag+x<=a[i].first)
                ag+=x;

            count+=a[i].second-ag+1;
            ag=a[i].second+1;
        }

        cout<<count;

        return 0;
}
