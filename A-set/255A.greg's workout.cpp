#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll chest=0,bicep=0,bck=0;
        ll n;

        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i+=3)
        {
            chest+=a[i];
        }

        for(i=1;i<n;i+=3)
        {
            bicep+=a[i];
        }

        for(i=2;i<n;i+=3)
        {
            bck+=a[i];
        }
//cout<<chest<<" "<<bck<<" "<<bicep<<endl;
        if(max3(chest,bicep,bck)==chest)
            cout<<"chest";

        else if(max3(chest,bicep,bck)==bicep)
            cout<<"biceps";

        else
            cout<<"back";

        return 0;
}
