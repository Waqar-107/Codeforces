/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

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
    ll n,f,s;

    cin>>n;
    pp a[n];

    map<ll,ll> mp;

    for(i=0;i<n;i++)
    {
        cin>>f>>s;
        mp[f]++;
        a[i]={f,s};
    }

    ll m=n-1;
    for(i=0;i<n;i++)
    {
        a[i].first=m+mp[a[i].second];
        a[i].second=m-mp[a[i].second];

        cout<<a[i].first<<" "<<a[i].second<<endl;
    }

    return 0;
}
