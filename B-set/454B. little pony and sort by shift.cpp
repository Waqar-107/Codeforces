/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("in");
#define pi 3.1416

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m,w;

    cin>>n;
    ll a[n];

   for(i=0;i<n;i++)
    cin>>a[i];

   ll occ=0,idx;

   for(i=1;i<n;i++)
   {
       if(a[i]<a[i-1])
       {
           occ++;
           idx=i;
       }
   }

    if(occ==1)
    {
        //check
        vector<ll> v;
        vector<ll> s;
        for(i=idx;i<n;i++)
        {
            v.push_back(a[i]);
        }

        for(i=0;i<idx;i++)
        {
            v.push_back(a[i]);
        }

        s=v;

        sort(s.begin(),s.end());

        if(s==v)
            cout<<(n-idx);
        else
            cout<<"-1";
    }

    else if(occ==0)
        cout<<"0";

    else
        cout<<"-1";

    return 0;
}
