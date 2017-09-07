/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;

    cin>>n>>k;

    //minimum
    if(k==n || k==0)
        cout<<"0 ";

    else
        cout<<"1 ";


    //maximum
    if(k==0)
        cout<<"0";

    else
    {
        if(k<=n/3)
            cout<<k*2;
        else
            cout<<n-k;
    }

    return 0;
}
