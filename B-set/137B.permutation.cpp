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
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll x=0,n;
    map<ll,ll> mp;

    cin>>n;
    ll a[n];


    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    map<ll,ll>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        if(p->second>1 && p->first<=n)
            x+=(p->second-1);

        else if(p->first>n)
            x+=(p->second);

        p++;
    }

    cout<<x;



    return 0;
}
