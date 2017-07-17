/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<int,int>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,count=0;
    string s;

    cin>>s;

    while(s.length()>1)
    {
        string t;
        i=1;m=0;
        for(j=0;j<s.length();j++)
        {
            m+=(s[j]-'0');
        }


        while(m/10)
        {
            j=m%10;m/=10;
            t.push_back(j+'0');
        }

        t.push_back(m+'0');
        reverse(t.begin(),t.end());

        s=t;count++;
    }

    cout<<count;

    return 0;
}
