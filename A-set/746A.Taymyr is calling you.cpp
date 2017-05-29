/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define ppp pair<ll,pp>
#define dbg printf("x");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    ll i,j,k;
    ll n,m,z;
    ll count=0;

    cin>>n>>m>>z;

    i=1;j=1;
    while(z)
    {
        if(i%n==0 && i%m==0)
            count++;

        z--;i++;
    }

    cout<<count;

    return 0;

}
