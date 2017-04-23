#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<char,int>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,m,count=0,sum=0,del=0;

        cin>>n>>m;
        ll a[n],g[m];
        map<ll,ll> bb;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            bb[a[i]]++;
        }

        map<ll,ll>::iterator p=bb.begin();
        i=1;sum=n;
        while(i<m)
        {
            del+=p->second;
            //cout<<"genre: "<<p->first<<" has: "<<p->second<<" books. delete: "<<del<<" "<<sum<<endl;

            count+=(sum-del)*p->second;
            p++;i++;
        }

        cout<<count;

        return 0;
}
