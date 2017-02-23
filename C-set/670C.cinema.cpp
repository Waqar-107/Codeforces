/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("xxxx");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m;
    ll a,b;
    map<ll,ll> mp;


    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }

    cin>>m;
    pp s[m];
    for(i=0;i<m;i++)
    {
        cin>>b;
        s[i]=make_pair(b,0);
    }

    for(i=0;i<m;i++)
    {
        cin>>b;
        s[i].second=b;
    }

    pp max=make_pair(-1,-1);
    ll idx=-1;
    for(i=0;i<m;i++)
    {
        if(mp[s[i].first]>max.first)
        {
            idx=i;
            max.first=mp[s[i].first];max.second=mp[s[i].second];
        }

        else if(mp[s[i].first]==max.first)
        {
            if(mp[s[i].second]>max.second)
            {
                idx=i;
                max.first=mp[s[i].first];max.second=mp[s[i].second];
            }
        }
    }

    cout<<idx+1;

    return 0;
}
