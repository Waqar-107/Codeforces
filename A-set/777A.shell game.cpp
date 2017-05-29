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
    string s;


    cin>>n>>j;

    n=n%6;

    if(n==0)
        s="012";

    else if(n==1)
        s="102";

    else if(n==2)
        s="120";

    else if(n==3)
        s="210";

    else if(n==4)
        s="201";

    else
        s="021";

    cout<<s[j];

    return 0;
}
