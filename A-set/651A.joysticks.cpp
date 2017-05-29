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
        ll count=0;
        ll a,b;

        cin>>a>>b;

        if(a==1 && b==1)
        {
            cout<<"0";
            return 0;
        }

        while(a>0 && b>0)
        {
            if(a>b)
            {
                a-=2;b++;
            }

            else
            {
                a++;b-=2;
            }

            count++;
        }

        cout<<count;

        return 0;
}

