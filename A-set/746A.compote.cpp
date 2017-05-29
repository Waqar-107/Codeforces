/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll a,b,c;

        cin>>a>>b>>c;

        a=a/1;
        b=b/2;
        c=c/4;

        i=min3(a,b,c);//cout<<i<<a<<b<<c<<endl;

        ll count=(1*i)+(2*i)+(4*i);
        cout<<count;


        return 0;
}
