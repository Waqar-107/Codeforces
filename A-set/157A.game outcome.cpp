/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("xxxx");
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
    ll sum;


    cin>>n;
    ll a[n][n];
    ll c[n],r[n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    if(n==1)
    {
        cout<<"0";return 0;
    }

    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
            sum+=a[i][j];

        r[i]=sum;

        sum=0;
        for(j=0;j<n;j++)
            sum+=a[j][i];

        c[i]=sum;
    }


    sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(r[i]<c[j])
            {
                sum++;
            }
        }
    }

    cout<<sum;

    return 0;
}
