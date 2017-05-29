#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        ll n,cp,total=0;

        cin>>n;
        ll a[n],p[n];

        for(i=0;i<n;i++)
            cin>>a[i]>>p[i];

        cp=p[0];
        for(i=0;i<n;i++)
        {
            if(p[i]<cp)
            {
                cp=p[i];
                total+=cp*a[i];
            }

            else
            {
                total+=cp*a[i];
            }
        }

        cout<<total<<endl;

        return 0;

}
