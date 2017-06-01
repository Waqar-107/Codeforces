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
    ll n,sum=0;
    ll max=0;

    cin>>n>>k;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    j=-1;
    for(i=0;i<n;i++)
    {
        while(true)
        {
            j++;
            sum+=a[j];

            if(sum>k || j>=n)
                break;
        }

        max=max2(max,j-i);

        if(j==n)
            break;

        sum-=a[i];
    }
    cout<<max;

    return 0;
}
