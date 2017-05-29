/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("f");
#define inf 1000000000000

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,count=0;
    map<char,ll> lil;
    string s;

    cin>>n>>s;

    char ch;
    for(i=0;i<s.length();i++)
    {
        if(isupper(s[i])==1)
        {
            ch=tolower(s[i]);

            if(lil[ch]>0)
                lil[ch]--;
            else
                count++;
        }

        else
            lil[s[i]]++;
    }

    cout<<count;

    return 0;
}
