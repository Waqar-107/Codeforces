/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define inf 1000000007
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        //freopen("in.txt","r",stdin);
        ll i,j,k;
        ll n;
        float s;bool f=false;
        ll max=0;

        cin>>n>>s;
        float x[n],y[n];

        for(i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }

        for(i=0;i<n;i++)
        {
            if(s>=(x[i]+y[i]/100))
            {
                f=true;
                if(max<(100-y[i]) && y[i]>0)
                    max=100-y[i];
            }
        }

        if(f)
            cout<<max;
        else
            cout<<"-1";

        return 0;
}
