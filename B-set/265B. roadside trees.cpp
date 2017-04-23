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
    ll i,j,k;
    ll n,count=-1;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    ll c=0;
    for(i=0;i<n;i++)
    {
        //from one tree to another
        count++;

        //from current distance to the top
        count+=(a[i]-c);

        //eating
        count++;

        //get down if needed
        if(a[i+1]<a[i])
        {
            count+=(a[i]-a[i+1]);
            c=a[i+1];
        }

        else
            c=a[i];
    }

    cout<<count;
    return 0;
}
