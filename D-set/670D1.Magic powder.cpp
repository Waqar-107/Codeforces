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

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,count=0;

    cin>>n>>k;
    ll a[n],b[n];


    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
        cin>>b[i];


    ll Min=inf;
    for(i=0;i<n;i++)
    {
        if(b[i]/a[i]<Min)
            Min=b[i]/a[i];
    }

    count=Min;
    for(i=0;i<n;i++)
    {
        b[i]-=(count*a[i]);
    }

    ll need;
    while(k)
    {
        need=0;
        for(i=0;i<n;i++)
        {
            if(b[i]<a[i])
                need+=(a[i]-b[i]);
        }

        if(k>=need)
        {
            count++;
            for(i=0;i<n;i++)
            {
                b[i]-=a[i];
                if(b[i]<0)
                    b[i]=0;
            }
            k-=need;
        }

        else
            k=0;
    }

    cout<<count;

    return 0;
}
