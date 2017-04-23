/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("f");
#define inf 1000000000000

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,w,h;
    ll r,s;

    cin>>n;
    pp a[n];
    pp x[n];


    w=0;h=0;
    for(i=0;i<n;i++)
    {
        cin>>j>>k;

        a[i]=make_pair(j,k);
        w+=j;h+=k;

        x[i]=make_pair(k,i+1);
    }


    sort(x,x+n,greater<pp>());
    r=x[0].second;

    for(i=0;i<n;i++)
    {
        if((i+1)==r)
            cout<<((w-a[i].first)*x[1].first)<<" ";
        else
            cout<<((w-a[i].first)*x[0].first)<<" ";
    }

    return 0;
}
