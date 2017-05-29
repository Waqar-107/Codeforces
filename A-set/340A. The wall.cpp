#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j;
        ll x,y,a,b;

        cin>>x>>y>>a>>b;

        ll lcm=(x*y)/__gcd(x,y);
        i=(b/lcm)-((a-1)/lcm);

        cout<<i;

        return 0;
}
