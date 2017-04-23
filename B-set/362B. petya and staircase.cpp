#include<bits/stdc++.h>
typedef long long int ll;
#define pp pair<ll,ll>
using namespace std;
int main()
{
        ll i,j,k;
        ll n,v,temp;
        ll count=0;


        cin>>n>>v;
        pp a[n];

        for(i=0;i<n;i++)
        {
            cin>>j>>k;
            a[i]=make_pair(j,k);
        }

        sort(a,a+n);

        if(a[0].second<v)
        {
            count+=(a[0].second);
            a[0].second=0;
        }

        else
        {
            count+=v;
            a[0].second-=v;
        }

        for(i=1;i<n;i++)
        {
            if(a[i].second>v)
            {
                a[i].second-=v;
                count+=v;
            }

            else
            {
                count+=a[i].second;
                a[i].second=0;
                temp=v-a[i].second;
                if(temp>a[i-1].second)
                    count+=a[i-1].second;
                else
                    count+=temp;
            }
        }

        if(a[n-1].second<v)
        {
            count+=(a[n-1].second);
            a[n-1].second=0;
        }

        else
        {
            count+=v;
            a[n-1].second-=v;
        }

        cout<<count;

        return 0;
}
