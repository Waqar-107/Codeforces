#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        ll n,m;

        cin>>n;
        ll a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b,b+n);

        //no multiples
        if(b[0]!=b[1])
        {
            for(i=0;i<n;i++)
            {
                if(a[i]==b[0])
                {
                    cout<<(i+1);
                    break;
                }
            }
        }

        else
            cout<<"Still Rozdil";

        return 0;
}
