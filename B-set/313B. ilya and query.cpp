/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n;
        ll count;
        string s;

        cin>>s>>n;
        ll x[s.length()],l[n],r[n];

        x[0]=0;
        for(i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                x[i]=x[i-1]+1;
            }

            else
            {
                x[i]=x[i-1];
            }

        }

        for(i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
        }

        for(i=0;i<n;i++)
        {
            cout<<(x[r[i]-1]-x[l[i]-1])<<endl;
        }

        return 0;
}
