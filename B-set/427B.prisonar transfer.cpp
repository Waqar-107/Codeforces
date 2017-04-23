/**from dust i have come, dust i will be**/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
        ll i,j,k;
        ll n,t,c;

        cin>>n>>t>>c;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll count=0,way=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<=t)
                count++;
            else
            {
                if(count-c+1>0)
                {
                    way+=count-c+1;
                }

                count=0;
            }
        }

        //last porjonto else e nao dhukte pare
        if(count-c+1>0)
        {
            way+=count-c+1;
        }


        cout<<way;
}
