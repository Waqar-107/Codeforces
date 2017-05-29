#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,mi,fi;

        cin>>n;
        ll a[n];
        vector<ll> v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==n)
            {
                mi=i+1;
            }

            else if(a[i]==1)
            {
                fi=i+1;
            }
        }

        v.push_back(abs(mi-1));
        v.push_back(abs(mi-n));
        v.push_back(abs(fi-1));
        v.push_back(abs(fi-n));

        sort(v.begin(),v.end());

        cout<<v[3];

        return 0;
}
