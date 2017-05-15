/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
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
    ll n;

    cin>>n>>k;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    ll sum=0;
    double fin=0;
    for(i=0;i<k;i++)
    {
        sum+=a[i];
    }

    fin=sum;

    j=k;
    for(i=1;i<n-k+1;i++)
    {
        sum-=a[i-1];
        sum+=a[j];

        j++;fin+=sum;
    }

    fin=fin/(n-k+1);
    printf("%f",fin);

    return 0;
}
