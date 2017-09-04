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

    ll i,k;
    ll R,d,n;
    ll x,y,r;

    double j;

    cin>>R>>d;
    cin>>n;

    ll count=0;
    for(i=0;i<n;i++)
    {
        cin>>x>>y>>r;

        //outside R-d circle, d>c1+c2
        //c1=R, c2=r, d=x*x-y*y
        //inside R circle, d+c2<=c1

        j=(x*x)+(y*y);
        j=sqrt(j);

        if(j>=(R-d+r) && j+r<=R)
            count++;
    }

    cout<<count;

    return 0;
}
