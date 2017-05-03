/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    //freopen("in.txt","r",stdin);
   
    ll i,j,k;
    ll n,m;

    cin>>n>>k;
    ll a,count=0;

    for(i=0;i<n;i++)
    {
        cin>>a;

        for(j=0;j<3;j++)
        {
            if(a>=k)
            {
                a-=k;
            }

            else
                break;
        }

        count+=a;
    }

    cout<<count;

    cin.clear();
    cin.ignore();
    //cin.get();

    return 0;
}
