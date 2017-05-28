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
    ll n;
    string s,t;

    cin>>n;
    cin>>t;
    for(i=1;i<n;i++)
    {
        cin>>s;

        for(j=0;j<s.length();j++)
        {
            if(s[j]!='?' && t[j]=='?' && t[j]!='#')
                t[j]=s[j];

            else if(s[j]!='?' && t[j]!='?' && s[j]!=t[j])
                t[j]='#';
        }
    }

    for(i=0;i<t.length();i++)
    {
        if(t[i]=='#')
            t[i]='?';

        else if(t[i]=='?')
            t[i]='r';
    }

    cout<<t;

    return 0;
}
