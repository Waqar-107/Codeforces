/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1000100
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int pre[N];
int dp[N][10];

int mult(int n)
{
    int m=1, r;
    while(n)
    {
        r=n%10;
        if(r)
            m*=r;
        n/=10;
    }

    return m;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int l,r,x;

    //calculate g(n) from 1 to 1e6
    for(i=1;i<=9;i++)
        pre[i]=i;

    for(i=10;i<N;i++)
        pre[i]=pre[mult(i)];

    memset(dp,0,sizeof(dp));

    //number of x(1<=x<=9) from 1 to i
    for(i=1;i<N;i++)
    {
        for(j=0;j<10;j++)
            dp[i][j]=dp[i-1][j];

        dp[i][pre[i]]++;
    }

    sf(n);
    for(i=0;i<n;i++)
    {
        sff(l,r); sf(x);

        pf(dp[r][x]-dp[l-1][x]);
    }

    return 0;
}
