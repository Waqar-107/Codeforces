#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j;
        ll n,c,x;

        cin>>n>>c;
        ll a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        ll max=0;

        for(i=0;i<n-1;i++)
        {
            x=a[i]-(a[i+1]+c);
            if(x>max)
                max=x;
        }

        cout<<max;

        return 0;
}
