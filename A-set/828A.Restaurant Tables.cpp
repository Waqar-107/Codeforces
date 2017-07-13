/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m;
    ll a,b;
    ll f[3];


    cin>>n>>a>>b;
    ll g[n];

    f[0]=a;f[1]=b;f[2]=0;

    ll count=0;
    for(i=0;i<n;i++)
    {
        cin>>k;

        if(k==2)
        {
            if(f[1]>0)
                f[1]--;
            else
                count+=2;
        }

        else
        {
            if(f[0]>0)
                f[0]--;

            else if(f[1]>0)
                f[1]--,f[2]++;

            else if(f[2]>0)
                f[2]--;

            else
                count++;
        }
    }

    cout<<count;

    return 0;
}
