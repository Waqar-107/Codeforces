/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("f");
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
    ll n,m,count=0;

    cin>>n>>m;

    while(true)
    {
        if(n>m)
        {
            n-=2;
            m--;
        }

        else
        {
            n--;m-=2;
        }

        if(n>=0 && m>=0)
            count++;
        else
            break;
    }

    cout<<count;

    return 0;
}
