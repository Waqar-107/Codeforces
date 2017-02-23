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
        //freopen("in.txt","r",stdin);

        ll i,j,k;
        ll n,count=0;

        cin>>n;
        ll x[n],h[n];

        for(i=0;i<n;i++)
        {
            cin>>x[i]>>h[i];
        }

        //leftmost and rightmost tree
        if(n==1)
            count=1;
        else
            count=2;

        ll count2=0,max;
        //start checking from 2 to n-1 th

        //start from 2, if possible make it fall in the left otherwise right
        for(i=1;i<n-1;i++)
        {
            if(x[i]-h[i]>x[i-1])
            {
                count2++;
            }

            else if(x[i]+h[i]<x[i+1])
            {
                count2++;
                x[i]+=h[i];
            }

        }

        max=count2;
        cout<<max+count;

        return 0;
}
