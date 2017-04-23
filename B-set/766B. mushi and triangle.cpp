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
    ll n;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    ll x,y,z;

    x=0;
    y=1;


    for(i=2;i<n;i++)
    {
        if(a[x]+a[y]>a[i])
        {
            cout<<"YES";
            return 0;
        }

        x++;
        y++;
    }

    cout<<"NO";

    return 0;
}
