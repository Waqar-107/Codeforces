/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

ll c[100001];
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,sum=0;

    cin>>n;
    ll a[n];
    map<ll,ll> mp;


    for(i=0;i<n;i++)
        cin>>a[i],mp[a[i]]++;

    c[0]=0;c[1]=mp[1];

    for(i=2;i<=100001;i++)
    {
        c[i]=max(c[i-1],c[i-2]+(i*mp[i]));
    }

    cout<<c[100001];

    return 0;
}
