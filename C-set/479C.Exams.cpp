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
    ll n,m;
    ll a,b;

    cin>>n;
    pp s[n];

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        s[i]=make_pair(a,b);
    }

    sort(s,s+n);

    ll prev=s[0].second;
    for(i=1;i<n;i++)
    {
        if(s[i].second>=prev)
            prev=s[i].second;
        else
            prev=s[i].first;
    }

    cout<<prev;

    return 0;
}
