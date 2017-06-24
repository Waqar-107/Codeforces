/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,h,x;

    cin>>n>>h>>k;
    ll a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    ll curH=h-a[0],t=0;
    for(i=1; i<n; i++)
    {
        if(a[i]<curH)
           curH-=a[i];

        else
        {
            x=a[i]-curH;

            //time to get enough place.
            j=x/k;
            if(x%k==0)
                t+=(x/k);
            else
                t+=(x/k+1),j++;

            curH+=(j*k);

            if(curH>h)
                curH=h;

            curH-=a[i];
        }
    }

    if(curH<h)
    {
        if((h-curH)%k==0)
            t+=((h-curH)/k);
        else
            t+=((h-curH)/k+1);
    }

    cout<<t;

    return 0;
}
