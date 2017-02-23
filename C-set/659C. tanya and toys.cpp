/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define inf 1000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        //freopen("in.txt","r",stdin);

        ll i,j,k;
        ll n,m,a;

        cin>>n>>m;
        map<ll,ll> x;

        for(i=0;i<n;i++)
        {
            cin>>a;
            x[a]++;
        }

        vector<ll> v;
        for(i=1;i<=inf;i++)
        {
            if(x[i]==0)
            {
                if(m-i>=0)
                {
                    m-=i;
                    v.push_back(i);
                }

                else
                    break;
            }
        }

        cout<<v.size()<<endl;
        vector<ll>::iterator p=v.begin();
        while(p!=v.end())
        {
            cout<<*p<<" ";
            p++;
        }


        return 0;
}
