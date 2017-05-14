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
        ll n,d,r;
        ll count=0;

        cin>>n>>d;
        ll a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=1;i<n;i++)
        {
            if(a[i]<=a[i-1])
            {
                r=a[i-1]-a[i]+1;
                if(r%d==0)
                {
                    count+=r/d;
                    a[i]+=r;//cout<<count<<" "<<a[i]<<" 1"<<endl;
                }

                else
                {
                    count+=(r/d+1);
                    a[i]+=(r/d+1)*d;
                    //cout<<count<<" "<<a[i]<<" 2"<<endl;
                }
            }
        }

        cout<<count;

        return 0;
}
