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
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,l,r;
    ll count=0;

    cin>>n>>l>>r;
    ll v[n],s[n];

    for(i=0;i<n;i++)
        cin>>v[i];

    for(j=0;j<n;j++)
        cin>>s[j];


    for(i=0;i<l-1;i++)
    {
       if(v[i]!=s[i])
        count++;
    }

    for(j=r;j<n;j++)
    {
        if(v[j]!=s[j])
        count++;
    }

    if(count>0)
        cout<<"LIE";
    else
        cout<<"TRUTH";

    return 0;
}
