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
    ios_base::sync_with_stdio(0);
    cin.tie();

    //freopen("in.txt","r",stdin);

    ll i,j,k;
    string s,t;
    map<char,ll> np;

    cin>>s>>t;

    for(i=0;i<t.length();i++)
        np[t[i]]++;

    ll c1=0,c2=0;

    //yay count
    for(i=0;i<s.length();i++)
    {
        if(np[s[i]]>0)
        {
            c1++;np[s[i]]--;s[i]='-';
        }
    }

    //whoops count
    for(i=0;i<s.length();i++)
    {
        if(s[i]!='-')
        {
            if(islower(s[i]) && np[toupper(s[i])]>0)
                np[toupper(s[i])]--,c2++;
            else if(isupper(s[i]) && np[tolower(s[i])]>0)
                np[tolower(s[i])]--,c2++;
        }
    }

    cout<<c1<<" "<<c2;

    cin.clear();
    cin.ignore();
    cin.get();

    return 0;
}
