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
        ll n,m,count=0;
        ll k2,k5,k3,k6;

        cin>>k2>>k3>>k5>>k6;

        m=min3(k2,k5,k6);
        count+=(256)*m;
        k2-=m;
        k5-=m;
        k6-=m;

        m=min2(k2,k3);
        count+=(32)*m;

        cout<<count;

        return 0;
}
