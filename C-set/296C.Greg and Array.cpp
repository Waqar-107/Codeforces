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
    ll l,r;

    cin>>n>>m>>k;

    ll a[n],lrd[m][3];
    ll x[m+1];

    memset(x,0,sizeof(x));

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<m;i++)
        cin>>lrd[i][0]>>lrd[i][1]>>lrd[i][2];

    //---------------------------------process queries
    for(i=0;i<k;i++)
    {
        cin>>l>>r;
        l--;
        x[l]++;x[r]--;
    }

    for(i=1;i<m;i++)
        x[i]+=x[i-1];
     //---------------------------------process queries

     for(i=0;i<m;i++)
        lrd[i][2]*=x[i];

    ll fin[n+1];
    memset(fin,0,sizeof(fin));

    for(i=0;i<m;i++)
    {
        fin[lrd[i][0]-1]+=lrd[i][2];
        fin[lrd[i][1]]-=lrd[i][2];
    }

    for(i=1;i<n;i++)
        fin[i]+=fin[i-1],a[i]+=fin[i];

    a[0]+=fin[0];
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
