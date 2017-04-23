#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
        ll i,j,k;
        ll n,count=0;
        ll seg=0;
        ll l,r;

        cin>>n;
        ll a[n],s[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s[i]=a[i];
        }

        sort(s,s+n);
        for(i=0;i<n;i++)
        {
            if(s[i]==a[i])
                count++;
        }

        if(count==n)
        {
            cout<<"yes\n1 1";
            return 0;
        }

        for(i=0;i<n-1,seg<1;)
        {
            if(a[i]<a[i+1])
            {
                i++;
            }

            else
            {
                l=i;
                r=i;
               while(a[i]>a[i+1] && i<n-1)
               {
                   i++;
                   r++;
               }

               sort(a+l,a+r+1);
               seg++;
            }
        }

        /*for(i=0;i<n;i++)
            cout<<a[i]<<" ";*/

        for(i=0;i<n;i++)
        {
            if(s[i]!=a[i])
            {
                cout<<"no";
                return 0;
            }
        }

        cout<<"yes\n"<<l+1<<" "<<r+1;

        return 0;
}
