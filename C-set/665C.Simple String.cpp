/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,f;
    string s;

    cin>>s;

    s.push_back('#');
    for(i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            for(j='a';j<='z';j++)
            {
                if(j!=s[i] && j!=s[i-1] && j!=s[i+1])
                {
                    s[i]=j;
                    break;
                }
            }
        }
    }

    s.pop_back();
    cout<<s;

    return 0;
}
