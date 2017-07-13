/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n;
    string s,t;

    map<char,char> mp;

    cin>>s>>t;

    for(i=0;i<s.length();i++)
        mp[s[i]]=t[i];

    cin>>s;

    char ch;
    for(i=0;i<s.length();i++)
    {
        if(isdigit(s[i]))
        {
            cout<<s[i];
            continue;
        }

        if(mp[s[i]])
            cout<<mp[s[i]];
            
        else
        {
            if(isupper(s[i]))
            {
                ch=mp[s[i]+32]-32;
                cout<<(ch);
            }

            else
            {
                ch=mp[s[i]-32]+32;
                cout<<ch;
            }
        }
    }


    return 0;
}
