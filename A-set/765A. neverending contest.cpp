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
    ll n;
    string s,cap;
    map<string,ll> mp;

    cin>>n;
    cin>>cap;

    string ss[n];
    for(i=0;i<n;i++)
    {
        cin>>ss[i];
        mp[ss[i]]++;
    }

    for(i=0;i<n;i++)
    {
        string from,to;

        if(mp[ss[i]]<=0)
            continue;

        for(j=0;j<3;j++)
            from.push_back(ss[i][j]);

        for(j=5;j<8;j++)
            to.push_back(ss[i][j]);

        s=to+"->"+from;

        if(mp[s]>0)
        {
            mp[s]--;
            mp[ss[i]]--;
        }
    }

    s="x";
    map<string,ll> :: iterator p=mp.begin();
    while(p!=mp.end())
    {
        if(p->second>=1)
        {
            s=p->first;
        }

        p++;
    }

    if(s=="x")
       {
           cout<<"home";return 0;
       }

    string too;
    for(i=5;i<8;i++)
        too.push_back(s[i]);

    if(too==cap)
        cout<<"home";
    else
        cout<<"contest";

    return 0;
}
