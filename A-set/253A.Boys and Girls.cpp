/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>
typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<ll,ll>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int i,j,k;
    int n,m;

    cin>>n>>m;

    if(n>m)
    {
        for(i=1;i<=m;i++)
            cout<<"BG";
        for(i=1;i<=n-m;i++)
            cout<<"B";
    }

    else
    {
        for(i=1;i<=n;i++)
            cout<<"GB";
        for(i=1;i<=m-n;i++)
            cout<<"G";
    }

    return 0;
}
