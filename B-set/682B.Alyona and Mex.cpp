/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<char,ll>
#define dbg printf("in");
#define NL printf("\n");
#define S 210000
#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    ll x=1;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            x++;

        else if(x<a[i])
        {
            a[i]=x;x++;
        }
    }

    cout<<x;

    return 0;
}
