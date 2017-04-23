/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("in");
#define pi 3.1416

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m,w;

    cin>>n;
    ll a[n];

    map<ll,ll> mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    vector<ll> v;

    map<ll,ll>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        v.push_back(p->first);
        p++;
    }

    if(v.size()>3)
    {
        cout<<"NO";
        return 0;
    }

    if(v.size()<=2)
    {
        cout<<"YES";
        return 0;
    }

    sort(v.begin(),v.end());

    ll d1=v[1]-v[0],d2=v[2]-v[1];
    if(d1==d2)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
