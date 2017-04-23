/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>
typedef long long int ll;

#define pp pair<ll,ll>
#define inf 1000000007
#define dbg cout<<"tttt"<<endl;
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{

        ll i,j,k;
        ll n,count=0,h;
        ll x=0;

        cin>>n>>k;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==k)
                x++;
        }

        while(x<n)
        {
            sort(a,a+n);
            h=-1;
            for(i=0;i<n;i++)
            {
                if(a[i]!=h && a[i]<k)
                {
                    h=a[i];
                    a[i]++;

                    if(a[i]==k)
                        x++;
                }
            }

            count++;
        }

        cout<<count;

        return 0;
}
