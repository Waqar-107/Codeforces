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
    ll n,x;

    cin>>n;

    ll a[n];
    map<ll,ll> mp;
    vector<ll> v;

    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>n)
            v.push_back(i);

        else if(mp[a[i]-1])
            v.push_back(i);

        else
            mp[a[i]-1]=1;
    }

    for(i=0;i<n;i++)
    {
        if(!mp[i])
        {
            j=v.back();v.pop_back();
            a[j]=i+1;
        }
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
