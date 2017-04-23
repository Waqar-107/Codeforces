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
    freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;

    cin>>n;
    m=n;
    ll a[n],b[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n,greater<ll>());

    j=1;i=0;
    while(j<n)
    {
        b[j]=a[i];i++;j+=2;
    }

    j=0;
    while(j<n)
    {
        b[j]=a[i];i++;j+=2;
    }


    for(i=1;i<n;i+=2)
    {
        if(b[i]<b[i-1])
        {
            cout<<"Impossible";
            return 0;
        }
    }

    for(i=2;i<n;i+=2)
    {
        if(b[i]>b[i-1])
        {
            cout<<"Impossible";
            return 0;
        }
    }

    for(i=0;i<n;i++)
        cout<<b[i]<<" ";

    return 0;
}
