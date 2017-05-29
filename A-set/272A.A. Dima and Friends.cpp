#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        ll n,m;
        ll count=0;
        ll ways=0;

        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            count+=a[i];
        }

        for(i=1;i<=5;i++)
        {
            if((count+i)%(n+1)!=1)
                ways++;
        }

        cout<<ways;

        return 0;
}
