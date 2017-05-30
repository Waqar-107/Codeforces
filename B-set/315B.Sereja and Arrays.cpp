/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

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
    ll n,m,t;
    ll x,add;

    cin>>n>>m;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    add=0;
    for(i=0;i<m;i++)
    {
        cin>>t;

        if(t==1)
        {
            cin>>j>>x;
            j--;
            a[j]=x-add;

        }

        else if(t==2)
        {
            cin>>x;
            add+=x;
        }

        else
        {
            cin>>j;j--;
            k=a[j]+add;
            cout<<k<<endl;
        }
    }

    return 0;
}
