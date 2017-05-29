#include<bits/stdc++.h>

typedef long long int ll;
#define pair<ll,ll> pii

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,pos=0,count=0,count2=0;
        bool f;


        cin>>n;
        char a[n+1];
        cin>>a;

        // "<"
        for(i=0;i<=n;i++)
        {
            if(a[i]=='<')
            {
                count++;
                if(count==(i+1))
                    {
                        count2++;
                    }
            }

            else
                count=0;
        }

        count=n+1;

        for(i=n-1;i>=0;i--)
        {
            if(a[i]=='>')
            {
                count--;
                if(count==(i+1))
                {
                        count2++;
                }
            }

            else
                count=n+1;
        }


        cout<<count2;

        return 0;
}
