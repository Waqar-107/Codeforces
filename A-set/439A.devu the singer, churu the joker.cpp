#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll i,j,k;
    ll n,d;
    ll ch=0,s;

    cin>>n>>d;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    s=0;
    for(i=0;i<n-1;i++)
    {
        s+=10+a[i];
        ch+=2;
    }

    if(d>=(s+a[i]))
    {
        d-=(s+a[i]);
        ch+=(d/5);
        cout<<ch;
    }

    else
        cout<<"-1";

    return 0;
}
