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
        ll n,l;
        string s;
        string x,y;

        cin>>n>>s;

        for(i=0;i<n;i+=2)
        {
            x.push_back(s[i]);
        }

        for(i=1;i<n;i+=2)
        {
            y.push_back(s[i]);
        }

        //cout<<x<<" "<<y;

        if(n%2==0)
        {
            l=x.length();
            for(i=l-1;i>=0;i--)
                cout<<x[i];

            cout<<y;
        }

        else
        {
            l=y.length();
            for(i=l-1;i>=0;i--)
                cout<<y[i];

            cout<<x;
        }


        return 0;
}
