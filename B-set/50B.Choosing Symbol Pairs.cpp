/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define S 1000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    string s;
    map<char,ll> mp;

    cin>>s;
    for(i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }

    ll count=0;
    map<char,ll>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        count+=(p->second*p->second);
        p++;
    }

    cout<<count;

    return 0;
}
