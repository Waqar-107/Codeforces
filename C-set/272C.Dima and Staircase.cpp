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
    freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    cin>>m;
    pp s[m];

    for(i=0;i<m;i++)
    {
        cin>>k>>j;
        s[i]={k,j};
    }

    ll cw=0,ch=0;
    for(i=0;i<m;i++)
    {
        if(cw<s[i].first)
        {
            ch=max(ch,a[s[i].first-1]);
            cout<<ch<<endl;

            ch+=s[i].second;
            cw=s[i].first;
        }

        else
        {
            cout<<ch<<endl;
            ch+=s[i].second;
        }
    }

    return 0;
}
