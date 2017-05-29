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
        ll n,a,pr=1,t;
        map<ll,ll> mp;

        cin>>n>>t;
        for(i=1;i<n;i++)
        {
            cin>>a;
            mp[i]=i+a;
        }

        map<ll,ll>::iterator p=mp.begin();
        while(p!=mp.end())
        {
            pr=mp[pr];
            if(pr==t)
            {
                cout<<"YES";
                return 0;
            }

            p++;
        }

        cout<<"NO";

        return 0;
}
