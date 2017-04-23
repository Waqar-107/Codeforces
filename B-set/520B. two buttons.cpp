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
        ll n,m,count=0;

        cin>>n>>m;

        while(m>n)
        {
            if(m%2==0)
            {m=m/2;cout<<m<<endl;}

            else
                m++;

            count++;
        }

        cout<<count+abs(n-m);

        return 0;
}
