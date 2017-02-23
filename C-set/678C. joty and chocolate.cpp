#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
        ll a,b,p,q,n;
        ll na,nb,common;
        ll lcm;

        cin>>n>>a>>b>>p>>q;

        na=n/a;
        nb=n/b;

        lcm=(a*b)/__gcd(a,b);
        common=n/lcm;

        na-=common;
        nb-=common;

        ll total=(na*p)+(nb*q)+(max(p,q)*common);

        cout<<total;

        return 0;
}
