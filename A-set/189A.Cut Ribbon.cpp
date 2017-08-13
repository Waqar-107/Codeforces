/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

using namespace std;

int main()
{
    int i,j,k;
    int n,a[3];
    int x,y,z;

    cin>>n>>a[0]>>a[1]>>a[2];

    int dp[4010];
    memset(dp,0,sizeof(dp));

    sort(a,a+3);

    dp[a[0]]=1, dp[a[1]]=1, dp[a[2]]=1;

    for(i=a[0]+1;i<=n;i++)
    {
        x=y=z=0;

        //a
        if(i>=a[0])
        {
            if(dp[i-a[0]]>0)
                x=dp[i-a[0]]+1;
        }

        //b
        if(i>=a[1])
        {
            if(dp[i-a[1]]>0)
                y=dp[i-a[1]]+1;
        }

        //c
        if(i>=a[2])
        {
            if(dp[i-a[2]]>0)
                z=dp[i-a[2]]+1;
        }

        dp[i]=max3(x,y,max(z,dp[i]));
    }

    cout<<dp[n];

    return 0;
}
