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
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m,common=0;
    ll x,y;
    map<ll,ll> mp;

    cin>>n>>m;

    i=1;x=2;
    while(i<=n)
    {
        mp[x]++;
        i++;x+=2;
    }

    i=1;y=3;
    while(i<=m)
    {
        mp[y]++;
        i++;y+=3;
    }

    x=n*2;
    y=m*3;

    map<ll,ll> :: iterator p=mp.begin();

    while(p!=mp.end())
    {
        if(p->second==2)
        {//cout<<p->first<<"  "<<x<<"  "<<y<<endl;
            if(x<=y)
            {
                x+=2;
                mp[x]++;
            }

            else
            {
                y+=3;
                mp[y]++;
            }
        }

        p++;
    }

    cout<<max2(x,y);


    return 0;
}
