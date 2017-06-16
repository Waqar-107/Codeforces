/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k,l;
    ll n,w;

    cin>>n>>w;
    ll a[2*n];

    for(i=0;i<2*n;i++)
        cin>>a[i];

    sort(a,a+(n*2));

    double p;
    if(a[0]*2<=a[n])
        p=(double)a[0];
    else
        p=(double)a[n]/2;

    //cout<<p<<endl;
    if(p*3*n<=w)
        printf("%lf",(double)p*3*n);
    else
        printf("%lf",(double)w);

    return 0;
}
