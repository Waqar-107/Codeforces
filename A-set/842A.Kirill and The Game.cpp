/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<string,int>
#define N 250000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll l,r,x,y;

    cin>>l>>r>>x>>y>>k;

    for(i=x;i<=y;i++)
    {
        j=i*k;
        if(j>=l && j<=r)
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";

    return 0;
}
