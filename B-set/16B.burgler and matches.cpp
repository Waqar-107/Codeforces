#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
        ll i,j,k;
        ll n,m;

        cin>>n>>m;
        ll a[m];

        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        cout<<a[n-1]-a[0];

        return 0;
}
