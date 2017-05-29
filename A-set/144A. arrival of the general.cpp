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
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n;

    cin>>n;
    ll a[n];

    ll max=-1;
    ll min=inf;

    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>max)
            max=a[i];

        if(a[i]<min)
            min=a[i];
    }

    ll count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            for(j=i;j>0;j--)
                a[j]=a[j-1];

            a[0]=max;
            break;
        }

        else
            count++;
    }

    for(i=n-1;i>=0;i--)
    {
        if(a[i]==min)
            break;
        else
            count++;
    }

    cout<<count<<endl;

    return 0;
}
