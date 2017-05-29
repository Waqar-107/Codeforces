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
    ll n,m;
    ll arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

    cin>>n>>m;

    for(i=0;i<15;i++)
    {
        if(arr[i]==n)
        {
            j=i+1;break;
        }
    }

    if(arr[j]==m)
        cout<<"YES";
    else
        cout<<"NO";


    return 0;
}
