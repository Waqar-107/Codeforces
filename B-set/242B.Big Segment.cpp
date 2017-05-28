/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define S 1000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n;

    cin>>n;
    pp a[n];

    ll m1=inf,m2=0;
    for(i=0;i<n;i++)
    {
        cin>>j>>k;
        a[i]={j,k};

        m1=min2(m1,j);
        m2=max2(m2,k);
    }

    for(i=0;i<n;i++)
    {
        if(a[i].first==m1 && a[i].second==m2)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }

    cout<<"-1";

    return 0;
}
