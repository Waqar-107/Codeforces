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
        ll n,m;

        cin>>n>>k;

        m=240-k;

        ll count=0;

        for(i=1;i<=n;i++)
        {
            if(m-(5*i)>=0)
            {
                count++;
                m=m-(5*i);
            }

            else
                break;
        }

        cout<<count;

        return 0;
}
