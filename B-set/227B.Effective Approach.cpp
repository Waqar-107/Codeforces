/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<ll,ll>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;

    cin>>n;

    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    cin>>m;

    ll b[m];
    for(i=0;i<m;i++)
        cin>>b[i];

    map<ll,pp> mp;

    for(i=0;i<n;i++)
    {
        mp[a[i]].first=i+1;
        mp[a[i]].second=n-i;
    }

    ll vas=0,pet=0;
    for(i=0;i<m;i++)
    {
        vas+=mp[b[i]].first;
        pet+=mp[b[i]].second;
    }

    cout<<vas<<" "<<pet<<endl;

    return 0;
}
