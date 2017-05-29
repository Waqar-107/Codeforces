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
        ll n,a,c;

        cin>>n>>a>>c;

        if(c<0)
        {
            c=abs(c);
            while(c)
            {
                a--;
                if(a==0)
                    a=n;

                c--;
            }
        }

        else
        {
            while(c)
            {
                a++;
                if(a==n+1)
                    a=1;

                c--;
            }
        }

        cout<<a;

        return 0;
}
