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
    ll x,y,z;
    ll a,b,c;

    cin>>a>>b>>c;

    if((a+b+c)%2!=0)
    {
        cout<<"Impossible";
        return 0;
    }

    x=(a+b-c)/2;
    y=(b+c-a)/2;
    z=(c+a-b)/2;

    if(x>=0 && y>=0 && z>=0 )
        cout<<x<<" "<<y<<" "<<z;
    else
        cout<<"Impossible";

    return 0;
}
