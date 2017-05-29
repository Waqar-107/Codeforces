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
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,a,m;
    vector<ll> v;

    cin>>n;

    for(i=0;i<n;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
            cin>>a;

            if(a==1 || a==3)
            {
                m++;
            }
        }

        if(m==0)
            v.push_back(i+1);
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    return 0;
}
