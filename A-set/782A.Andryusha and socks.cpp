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
    ll n,m,count=0,max=0;
    map<ll,ll> mp;

    cin>>n;n*=2;
    ll a[n];


    for(i=0;i<n;i++)
        cin>>a[i];


    for(i=0;i<n;i++)
    {
        if(mp[a[i]]==0)
        {
            count++;mp[a[i]]++;
            if(count>max)
                max=count;
        }

        else
        {
            mp[a[i]]--;
            count--;
        }

    }

    cout<<max<<endl;

    return 0;
}
