/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("in");
#define pi 3.1416

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    ll i,j,k;
    ll n=8;

    string s[n];
    for(i=0;i<8;i++)
        cin>>s[i];

    //1st row as starting
    for(j=1;j<n;j++)
    {
        if(s[0][j]==s[0][j-1])
        {
            cout<<"NO";
            return 0;
        }
    }

    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(s[i][j]==s[i][j-1])
            {
                cout<<"NO";
                return 0;
            }
        }
    }

    cout<<"YES";

    return 0;
}
