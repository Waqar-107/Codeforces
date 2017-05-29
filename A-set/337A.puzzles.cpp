#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    ll i,j,k;
    ll n,m;
    ll min=99999999;

    cin>>n>>m;
    ll a[m];

    for(i=0;i<m;i++)
        cin>>a[i];

    sort(a,a+m);

    for(i=0;i<=(m-n);i++)
    {
        ll temp=a[n+i-1]-a[i];
        if(temp<min)
            min=temp;
    }

    cout<<min;

    return 0;
}
