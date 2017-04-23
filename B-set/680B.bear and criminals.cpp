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
        //freopen("in.txt","r",stdin);
        ll i,j,k;
        ll n,d,count=0;

        cin>>n>>d;
        ll a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        j=1;
        while(d+j>=1 && d+j<=n && d-j>=1 && d-j<=n)
        {
            if(a[d+j-1]==1 && a[d-j-1]==1)
                count+=2;

            a[d+j-1]=-1;a[d-j-1]=-1;j++;
        }

        for(i=0;i<n;i++)
        {
            if(a[i]!=-1 && a[i]!=0)
                count++;
        }

        cout<<count;
        return 0;
}
