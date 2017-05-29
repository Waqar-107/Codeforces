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

bool cmp(pp a, pp b)
{
    if(a.first>b.first)
        return true;

    else if(a.first==b.first)
        return a.second<b.second;

    else
        return false;
}

int main()
{
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,d;
    ll p,t;
    map<pp,ll> mp;

    cin>>n>>d;
    pp a[n];

    for(i=0;i<n;i++)
    {
        cin>>p>>t;
        a[i]=make_pair(p,t);
        mp[a[i]]++;
    }

    sort(a,a+n,cmp);

    //for(i=0;i<n;i++)
        //cout<<a[i].first<<" "<<a[i].second<<endl;

    cout<<mp[a[d-1]];

    return 0;
}
