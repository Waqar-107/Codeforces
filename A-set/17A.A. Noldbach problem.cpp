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
        ll n,p;

        cin>>n>>k;
        ll a[n+1];

        for(i=0;i<=n;i++)
        {
            a[i]=1;
        }

        //prime
        a[0]=0;a[1]=0;a[2]=1;
        //all evens are non-primes
        for(i=4;i<=n;i+=2)
        {
            a[i]=0;
        }

        for(i=3;i<=n;i+=2)
        {
            if(a[i]==1)
            {
                int x=2;
                while(i*x<=n)
                {
                    a[i*x]=0;
                    x++;
                }
            }
        }

        vector<ll> v;
        for(i=0;i<=n;i++)
        {
            if(a[i]==1)
                v.push_back(i);
        }

        int count=0;
        for(i=0;i<(v.size());i++)
        {
            for(j=0;j<v.size();j++)
            {
                if(v[j]+v[j+1]+1==v[i])
                {
                    count++;
                    break;
                }
            }
        }

        if(count>=k)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
}
