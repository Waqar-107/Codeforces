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
    ll n,sum=0;

    cin>>n;
    ll a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    //main diagonal
    for(i=0,j=0;i<n,j<n;i++,j++)
    {
        sum+=a[i][j];
        a[i][j]=0;
    }

    //secondary diagonal
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        sum+=a[i][j];
        a[i][j]=0;
    }

    //mid row
    for(i=0;i<n;i++)
    {
        sum+=a[n/2][i];
        a[n/2][i]=0;
    }

    //mid column
    for(i=0;i<n;i++)
    {
        sum+=a[i][n/2];
        a[i][n/2]=0;
    }


    cout<<sum;

    return 0;
}
