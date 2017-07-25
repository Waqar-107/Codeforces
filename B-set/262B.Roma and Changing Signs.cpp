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

    cin>>n>>k;

    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n,k>0;i++)
    {
        if(a[i]<0)
            a[i]*=-1,k--;
        else
            break;
    }

    sort(a,a+n);

    if(k>0)
    {
        if(k%2)
            a[0]*=-1;
    }

    ll count=0;
    for(i=0;i<n;i++)
        count+=a[i];

    cout<<count;

    return 0;
}
