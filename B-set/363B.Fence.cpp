#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j;
        ll n,k;
        ll sum=0,min,idx;

        cin>>n>>k;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        //1st k
        for(i=0;i<k;i++)
        {
            sum+=a[i];
        }

        min=sum;
        idx=0;

        ll addPosition=k;
        ll subPosition=0;

        while(addPosition<n)
        {
            sum=sum-a[subPosition]+a[addPosition];

            if(sum<min)
            {
                min=sum;
                idx=subPosition+1;
            }

            addPosition++;
            subPosition++;

        }


        cout<<idx+1;
        return 0;
}
