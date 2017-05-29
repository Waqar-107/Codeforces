/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
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
    ll n,l,sum=0,f;

    cin>>n>>f;
    ll a[n];

    for(i=0;i<n;i++)
    {
        cin>>k>>l;

        sum+=min(k,l);

        if(k>=l)
            a[i]=0;

        else
        {
            a[i]=min(2*k,l)-min(k,l);
        }
    }

    sort(a,a+n,greater<ll>());

    i=0;
    while(f && i<n)
    {
        if(a[i]>0)
        {
            sum+=a[i];
            f--;
        }

        i++;
    }

    cout<<sum;

    return 0;
}
