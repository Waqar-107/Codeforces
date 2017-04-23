#include<bits/stdc++.h>
#define pi acos(-1.0)
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        ll n,m;
        ll pos;

        cin>>n;
        ll a[n],worm[2*n];

        for(i=0;i<n;i++)
            cin>>a[i];


        cin>>m;
        ll q[m];

        for(i=0;i<m;i++)
            cin>>q[i];

        worm[0]=1;
        worm[1]=a[0];

        j=2;
        for(i=1;i<n;i++)
        {
            worm[j]=worm[j-1]+1;
            worm[j+1]=worm[j]+a[i]-1;
            j+=2;
        }

        /*for(i=0;i<2*n;i++)
            cout<<worm[i]<<"  ";*/

        cout<<endl;
        for(i=0;i<m;i++)
        {
            pos=lower_bound(worm,worm+(2*n),q[i])-worm;
            pos++;
            if(pos%2==0)
            {
                cout<<pos/2<<endl;
            }

            else
            {
                cout<<(pos/2)+1<<endl;
            }

        }

        return 0;
}
