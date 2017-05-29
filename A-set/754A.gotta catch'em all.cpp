/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define inf 1000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        //freopen("in.txt","r",stdin);
        ll i,j,k;
        ll n,v;
        string s,c="Bulbsar";
        map<char,ll> mp;

        for(i=0;i<c.length();i++)
            mp[c[i]]=0;

        cin>>s;
        for(i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }

        mp['u']/=2;
        mp['a']/=2;

       ll ans=inf;
        for(i=0;i<c.length();i++)
        {
            if(mp[c[i]]<ans)
            {
                ans=mp[c[i]];
            }
        }

        cout<<ans;

        return 0;
}
