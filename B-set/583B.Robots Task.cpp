/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,d,m;
    int count,cur;

    cin>>n;

    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    i=0;d=1;m=n;
    cur=0,count=0;

    while(1)
    {
        if(a[i]!=-7)
        {
            if(a[i]<=cur)
            {
                a[i]=-7;cur++;m--;
            }
        }

        if(m==0)
            break;

        i+=d;
        if(i==n)
            d=-1,count++,i=n-1;
        else if(i<0)
            d=1,count++,i=0;
    }


    cout<<count;

    return 0;
}
