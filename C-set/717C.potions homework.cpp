#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        ll n,sum=0;

        cin>>n;
        ll l[n];

        for(i=0;i<n;i++)
        {
            cin>>l[i];
        }

        sort(l,l+n);

        for(i=0;i<n;i++)
        {
            sum=(sum+(l[i]*l[n-i-1]))%10007;
        }

        cout<<sum;

        return 0;
}
