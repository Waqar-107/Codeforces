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
        ll n,x,b,m;
        map<ll,bool> mp;

        cin>>n>>m;
        for(i=1;i<=m;i++)
        {
            mp[i]=false;
        }


        for(i=0;i<n;i++)
        {
            cin>>x;
            for(j=0;j<x;j++)
            {
                cin>>b;
                mp[b]=true;
            }
        }

        for(i=1;i<=m;i++)
        {
            if(mp[i]==false)
            {
                cout<<"NO";
                return 0;
            }
        }

        cout<<"YES";

        return 0;
}
