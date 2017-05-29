/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,m,len;

        cin>>n>>m>>k;

        //lane
        if(k%(2*m)==0)
            len=(k/(2*m));
        else
            len=(k/(2*m))+1;

        cout<<len<<" ";


        ll dd;
        //desk
        if(k%2==0)
            dd=k/2;
        else
            dd=(k/2)+1;

        j=1;
       for(i=1;i<=dd;i++)
       {
           if(i==dd)
            cout<<j<<" ";

           if(j==m)
                j=1;
           else
                j++;
       }


        if(k%2==0)
            cout<<'R';
        else
            cout<<'L';

        return 0;
}
