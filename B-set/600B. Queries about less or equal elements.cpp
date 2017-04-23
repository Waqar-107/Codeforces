#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
        ll a,b;
        ll i,j,k;

        cin>>a>>b;
        ll x[a],y[b];

        for(i=0;i<a;i++)
            cin>>x[i];

        for(i=0;i<b;i++)
            cin>>y[i];

        sort(x,x+a);

        for(i=0;i<b;i++)
        {
            cout<<upper_bound(x,x+a,y[i])-x<<" ";
        }

        return 0;
}
