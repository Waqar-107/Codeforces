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

bool cmp(pp a,pp b)
{
    return a.second<b.second;
}

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n;

    cin>>n;
    pp a[n];

    for(i=0;i<n;i++)
    {
        cin>>j;
        a[i]={j,i};
    }

    sort(a,a+n);

    ll cur=a[0].first;
    for(i=1;i<n;i++)
    {
        if(a[i].first>cur)
            cur=a[i].first;
        else
        {
            a[i].first=cur+1;
            cur++;
        }
    }

    sort(a,a+n,cmp);

    for(i=0;i<n;i++)
        cout<<a[i].first<<" ";

    return 0;
}
