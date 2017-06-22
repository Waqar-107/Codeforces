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
    int n,p,x;

    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    int d[n+1][3]={0};

    for(i=1;i<=n;i++)
    {
        if(a[i-1]==0)
        {
            d[i][0]=max3(d[i-1][0],d[i-1][1],d[i-1][2]);
            d[i][1]=d[i-1][1];
            d[i][2]=d[i-1][2];
        }

        else if(a[i-1]==1)
        {
            d[i][0]=max3(d[i-1][0],d[i-1][1],d[i-1][2]);
            d[i][1]=max2(d[i-1][0]+1,d[i-1][2]+1);
            d[i][2]=d[i-1][2];
        }

        else if(a[i-1]==2)
        {
            d[i][0]=max3(d[i-1][0],d[i-1][1],d[i-1][2]);
            d[i][1]=d[i-1][1];
            d[i][2]=max2(d[i-1][0]+1,d[i-1][1]+1);
        }

        else
        {
            d[i][0]=max3(d[i-1][0],d[i-1][1],d[i-1][2]);
            d[i][1]=max2(d[i-1][0]+1,d[i-1][2]+1);
            d[i][2]=max2(d[i-1][0]+1,d[i-1][1]+1);
        }
    }

    int m=-1;
    for(i=1;i<=n;i++)
    {
        m=max2(m,max3(d[i][0],d[i][1],d[i][2]));
    }

    cout<<n-m;

    return 0;
}
