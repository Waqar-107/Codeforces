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
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m,p;

    cin>>n;

    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    int t=10;p=0;m=0;
    for(i=0;i<n;i++)
    {
        if(t+a[i]>720)
            break;

        t+=a[i], m++;

        if(t>360)
            p+=(t-360);
    }

    cout<<m<<" "<<p;

    return 0;
}
