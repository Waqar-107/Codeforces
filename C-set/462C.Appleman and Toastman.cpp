/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;
    ll a,sum=0;

    cin>>n;
    vector<ll> v;

    for(i=0;i<n;i++)
    {
        cin>>m;
        sum+=m;
        v.push_back(m);
    }

    sort(v.begin(),v.end(),greater<ll>());

    ll count=0;a=0;
    while(v.size())
    {
        //toast
        count+=(sum+a);

        //apple
        a=v.back();
        sum-=v.back();
        v.pop_back();
    }

    cout<<count;

    return 0;
}
