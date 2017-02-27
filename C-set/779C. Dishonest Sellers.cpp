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

bool cmp(pp a ,pp b)
{
    if(a.second>a.first && b.second>b.first)
        return ((a.second-a.first)<(b.second-b.first));

    else if(a.second<a.first && b.second<b.first)
        return ((a.first-a.second)<(b.first-b.second));

    else
        return ((a.first-a.second)<(b.first-b.second));
}

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,s=0;

    cin>>n>>k;
    ll a[n],b[n];
    pp x[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {
        cin>>b[i];
        x[i]=(make_pair(a[i],b[i]));
    }

    sort(x,x+n,cmp);

    /*for(i=0;i<n;i++)
        cout<<x[i].first<<" "<<x[i].second<<endl;*/

    for(i=0;i<n;i++)
    {
        if(x[i].second<x[i].first && k<=0)
            break;

        else
        {
            s+=x[i].first;
            k--;
        }
    }

    for(j=i;j<n;j++)
    {
        s+=x[j].second;
    }

    cout<<s;

    return 0;
}
