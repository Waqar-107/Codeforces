/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    int i,j,k;
    string s;
    map<char,int> mp;

    s="AHIMOTUVWXY";

    for(i=0;i<s.length();i++)
        mp[s[i]]=1;

    cin>>s;

    for(i=0;i<s.length();i++)
    {
        if(!mp[s[i]])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    string t=s;
    reverse(s.begin(),s.end());

    if(s==t)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
