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
    ll n,m;
    map<ll,ll> mp;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>m;
        mp[m]++;
    }

    ll count=0;
    map<ll,ll>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        if(p->first!=0 && p->second==2)
            count++;

        else if(p->first!=0 && p->second>2)
        {
            cout<<"-1";
            return 0;
        }

        p++;
    }

    cout<<count;

    return 0;
}
