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
    ll n,m,x;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    if(n<=2)
    {
        cout<<n;
        return 0;
    }

    i=0;m=0;x=2;
    while(i<=n-2)
    {
        if(a[i]+a[i+1]==a[i+2])
            x++,i++;

        else
        {
            m=max(m,x);
            x=2;i++;
        }
    }

    m=max(m,x);
    cout<<m;

    return 0;
}
