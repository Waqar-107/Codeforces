/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>
typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<ll,ll>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;
    ll x,y,ex;

    cin>>n>>m;

    if(m<n-1 || m>2*n+2)
    {
        cout<<"-1";
        return 0;
    }

    //if quantity of zero is larger by 1
    if(m<n)
    {
        for(i=0;i<m;i++)
            cout<<"01";

        cout<<"0";
        return 0;
    }

    x=(m-n);

    if(x<=2)
    {
        for(i=0;i<n;i++)
            cout<<"10";

        for(i=0;i<x;i++)
            cout<<"1";

        return 0;
    }

    //saved for the last
    ex=2;
    x-=2;
    y=n-x;

    for(i=0;i<x;i++)
        cout<<"110";

    for(i=0;i<y;i++)
        cout<<"10";

    for(i=0;i<ex;i++)
        cout<<"1";

    return 0;
}
