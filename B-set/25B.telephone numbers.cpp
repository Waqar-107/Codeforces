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
        string s;

        cin>>n;
        cin>>s;

        if(n%2==0)
        {
            for(i=1;i<=n;i++)
            {
                cout<<s[i-1];

                if(i%2==0&& i!=n)
                    cout<<'-';
            }
        }

        else
        {
            for(i=1;i<=n-3;i++)
            {
                cout<<s[i-1];

                if(i%2==0)
                    cout<<'-';
            }

            cout<<s[n-3]<<s[n-2]<<s[n-1];
        }


        return 0;
}
