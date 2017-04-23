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
    ll n,count=0,x;
    string s;


    cin>>s;
    n=s.length();
    char t[n+2]; char ss[n+1];

    for(i=0;i<n;i++)
    {
        t[i]='1';ss[i]=s[i];
    }


    count=(n*(atoll(ss)+1))-atoll(t);
    cout<<count;

    return 0;
}
