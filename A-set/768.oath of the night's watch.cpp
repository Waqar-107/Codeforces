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
    ll n,count2=0;

    cin>>n;
    ll a[n];

     for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    for(i=1;i<n-1;i++)
    {
        if(a[i]>a[0] && a[i]<a[n-1])
            count2++;
    }

    cout<<count2;



    return 0;
}
