/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k,l;
    ll n;
    string s,t;

    map<char,string> mp;

    mp['2']="2";mp['3']="3";mp['5']="5";
    mp['6']="53";mp['7']="7";mp['8']="7222";
    mp['9']="7332";mp['4']="322";

    cin>>n;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i]!='0' || s[i]!='1')
        {
            t+=mp[s[i]];
        }
    }

    sort(t.begin(),t.end(),greater<char>());
    cout<<t;

    return 0;
}
