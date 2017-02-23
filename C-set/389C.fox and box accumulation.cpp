/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,string>
#define dbg printf("xxxx");
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
    ll n,count;

    cin>>n;
    ll a[n];


    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    ll c,p=0;
    for(i=0;i<n;i++)
    {
        c=a[i];
        vector<ll> idx;

        if(a[i]==inf)
            continue;

        idx.push_back(i);count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[j]!=inf && a[j]>=c && a[j]>0 && count<=a[j])
            {
                idx.push_back(j);count++;
            }
        }

        for(j=0;j<idx.size();j++)
            a[idx[j]]=inf;

        p++;
    }

    cout<<p;

    return 0;

}

