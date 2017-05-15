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
    ll min,max;
    ll n,m;
    ll x,y,rem;

    cin>>n>>m;
    x=n-m+1;

    x--;
    max=x*(x+1)/2;

    rem=n%m;
    x=n/m;

    //rem number of group has x+1 members
    y=x+1;
    min=y*(y-1)/2*rem;

    //m-rem groups have just x members
    y=m-rem;
    min+=x*(x-1)/2*y;

    cout<<min<<" "<<max<<endl;

    return 0;
}
