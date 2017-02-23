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
        ll n;
        map<ll,ll> mp;
        vector<pp> v;

        scanf("%I64d",&n);
        ll a[n];

        for(i=0;i<n;i++)
            scanf("%I64d",&a[i]);

        ll l=1,r;
        for(i=0;i<n;i++)
        {
            if(mp[a[i]]==0)
            {
                mp[a[i]]++;
            }

            else
            {
                v.push_back(make_pair(l,i+1));
                l=i+2;
                mp.erase(mp.begin(),mp.end());
            }
        }


        if(v.size()==0)
        {
            cout<<"-1";
            return 0;
        }

        v.back().second=n;
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
            printf("%I64d %I64d\n",v[i].first,v[i].second);

        return 0;
}
