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
    ll od=0,ev=0;

    scanf("%I64d",&n);

    ll a[n];
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);

        if(a[i]%2==0)
            ev++;
        else
            od++;
    }

    //all are even
    if(ev==n)
    {
        cout<<"Second";
        return 0;
    }

    else
        cout<<"First";

    return 0;
}
