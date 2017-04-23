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
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m;
    ll t,l,r;


    cin>>n;
    ll a[n],b[n],c[n],d[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b,b+n);

    c[0]=a[0];d[0]=b[0];
    for(i=1;i<n;i++)
    {
        c[i]=a[i]+c[i-1];
        d[i]=b[i]+d[i-1];
    }

    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>t>>l>>r;
        l--;r--;

        if(t==1)
            cout<<(c[r]-c[l]+a[l])<<endl;
        else
            cout<<(d[r]-d[l]+b[l])<<endl;
    }

    return 0;
}
