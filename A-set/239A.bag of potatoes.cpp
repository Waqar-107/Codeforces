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
    ll x,y,n;

    cin>>y>>k>>n;

    i=1;j=0;
    while(k*i<=n)
    {
        if(k*i-y>0)
        {
            cout<<(k*i-y)<<" ";j++;
        }

        i++;
    }

    if(j<=0)
        cout<<"-1";

    return 0;
}
