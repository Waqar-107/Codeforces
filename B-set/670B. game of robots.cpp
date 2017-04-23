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
        ll n,kb;

        cin>>n>>k;
        ll a[n];kb=k;

        for(i=0;i<n;i++)
            cin>>a[i];

        j=1;
        while(true)
        {
            if(kb-j>0)
            {
                kb-=j;
                j++;
            }

            else
            {
                cout<<a[kb-1]<<endl;
                break;
            }
        }

        return 0;
}
