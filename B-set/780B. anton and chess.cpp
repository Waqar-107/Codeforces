/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("xxxx");
#define pi 3.1416

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m;

    cin>>n;
    ll L1[n],R1[n];

    for(i=0;i<n;i++)
        cin>>L1[i]>>R1[i];

    cin>>m;
    ll L2[m],R2[m];

    for(i=0;i<m;i++)
        cin>>L2[i]>>R2[i];

    //n age, m pore
    sort(L2,L2+m,greater<ll>());
    sort(R1,R1+n);

    ll x=L2[0]-R1[0];


    //m age n pore
    sort(L1,L1+n,greater<ll>());
    sort(R2,R2+m);

    ll y=L1[0]-R2[0];

    ll z=max2(x,y);

    if(z>0)
        cout<<z;
    else
        cout<<"0";

    return 0;
}
