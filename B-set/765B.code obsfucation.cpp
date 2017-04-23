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
    string s;
    map<char,ll> mp;

    cin>>s;
    n=s.length();

    char fir='a';
    for(i=0;i<n;i++)
    {
        if(s[i]==fir)
        {
            fir++;
        }

        else if(s[i]<fir)
            continue;

        else
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

    return 0;
}
