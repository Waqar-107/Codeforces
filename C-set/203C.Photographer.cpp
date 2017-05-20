/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
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
    ll a,b,w;

    cin>>n>>w;
    cin>>a>>b;

    pp s[n];
    for(i=0;i<n;i++)
    {
        cin>>j>>k;

        m=(a*j)+(b*k);
        s[i]={m,i+1};
    }

    sort(s,s+n);
    i=0;
    vector<ll> v;

    while(w>0)
    {
        if(w-s[i].first>=0)
        {
            v.push_back(s[i].second);
            w-=s[i].first;
            i++;
        }

        else
            break;
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    return 0;
}
