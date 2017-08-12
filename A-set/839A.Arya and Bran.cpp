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

    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    ll c=0,sum=0;

    for(i=0;i<n;i++)
    {
        j=a[i]+c;

        if(j>8)
        {
            j-=8;
            c=j;
            sum+=8;
        }

        else
        {
            sum+=j;
            c=0;
        }

        if(sum>=k)
        {
            cout<<(i+1);
            return 0;
        }
    }

    cout<<"-1";

    return 0;
}
