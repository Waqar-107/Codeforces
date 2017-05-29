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
    ll i,j,k;
    ll n,a,b;

    cin>>n;
    a=1,b=n*n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2;j++)
        {
            cout<<a<<" ";
            a++;
        }

        for(j=0;j<n/2;j++)
        {
            cout<<b<<" ";
            b--;
        }

        cout<<endl;
    }

    return 0;
}
