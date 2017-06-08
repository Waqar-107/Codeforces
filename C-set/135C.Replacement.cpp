/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define inf 1000000000000
#define fr(a) for(i=0;i<n;i++)

#define mm 1000000007

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    if(a[n-1]==1)
        a[n-1]=2;
    else
        a[n-1]=1;

    sort(a,a+n);

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
