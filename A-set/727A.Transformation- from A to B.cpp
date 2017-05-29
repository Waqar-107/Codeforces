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
        ll a,b;
        vector<ll> v;

        cin>>a>>b;
        //a=4;b=42;
        v.push_back(b);
        while(b>0)
        {
            if(b%2==0)
            {
                b/=2;
                v.push_back(b);
            }

            else if((b-1)%10==0)
            {
                b-=1;
                b/=10;
                v.push_back(b);
            }

            else
                break;

            if(b==a)
            {
                break;
            }
        }

        if(v[v.size()-1]!=a)
        {
            cout<<"NO";
        }

        else
        {
            cout<<"YES"<<endl;
            cout<<v.size()<<endl;
            ll n=v.size();
            for(i=n-1;i>=0;i--)
                cout<<v[i]<<" ";
        }

        return 0;
}
