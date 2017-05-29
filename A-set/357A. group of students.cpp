#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        ll x,y,m;
        ll s=0;
        ll g1=0,g2=0;

        cin>>m;
        ll a[m];

        for(i=0;i<m;i++)
        {
            cin>>a[i];
            s+=a[i];
        }

        cin>>x>>y;

        k=1;
        for(i=0;i<m-1;i++)
        {
            //if cut off mark is (i+1)
            g1+=a[i];
            g2=(s-g1);

            if(g1>=x && g1<=y && g2>=x && g2<=y)
            {
                cout<<k+1<<endl;
                return 0;
            }

            k++;
        }

        if(g1>=x && g1<=y && g2>=x && g2<=y)
        {
            cout<<k<<endl;
        }

        else
            cout<<"0";


        return 0;
}
