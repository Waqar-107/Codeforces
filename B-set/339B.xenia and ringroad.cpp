#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll n,m;
        ll i,j,k;
        ll sum;

        cin>>n>>m;
        ll a[m];

        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }

        sum=a[0]-1;

        for(i=1;i<m;i++)
        {
            if(a[i]>a[i-1])
            {
                sum+=a[i]-a[i-1];
            }

            else if(a[i]<a[i-1])
            {
                sum+=(a[i])+(n-a[i-1]);
            }

            else if(a[i]==a[i-1])
                {
                    sum+=0;
                }

            //cout<<sum<<endl;

        }

        cout<<sum<<endl;

        return 0;
}
