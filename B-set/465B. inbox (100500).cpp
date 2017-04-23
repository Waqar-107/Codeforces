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
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m,w;

    cin>>n;
    ll a[n];

    w=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i])
            w++;
    }

    ll count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
            w--;
        }

        else
        {
            if(a[i-1]==1 && w)
                count++;
        }
    }

    cout<<count;

    return 0;
}
