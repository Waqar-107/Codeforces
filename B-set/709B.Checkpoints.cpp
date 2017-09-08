/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,ll>
#define inf 1000000000

using namespace std;

int main()
{
    int i,j,k;
    int n,d,x;

    cin>>n>>d;

    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    if(n==1)
    {
        cout<<"0";
        return 0;
    }

    sort(a,a+n);

    if(d<=a[0])
        cout<<abs(d-a[n-2]);

    else if(d>=a[n-1])
        cout<<abs(d-a[1]);

    else
    {
        i=0;
        //leave the left most
        if(d<=a[1])
            i=abs(d-a[n-1]);
        else
        {
            j=abs(d-a[1]);
            k=abs(d-a[n-1]);

            i=j+k+min(j,k);
        }

        //leave the right most
        if(d>=a[n-2])
            j=abs(d-a[0]);
        else
        {
            j=abs(d-a[n-2]);
            k=abs(d-a[0]);

            x=j+k+min(j,k);
            j=x;
        }

        i=min(i,j);
        cout<<i;
    }

    return 0;
}
