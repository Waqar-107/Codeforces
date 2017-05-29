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

    ll i,j,k;
    ll a,b,c;
    ll n,m;

    cin>>a>>b;

    if(a==0 && b==0)
        cout<<"NO";

    else
    {
        if(abs(a-b)==1 || a==b)
            cout<<"YES";
        else
            cout<<"NO";
    }

    return 0;

}

