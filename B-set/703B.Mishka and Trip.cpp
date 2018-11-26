/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    ll cnt=0, sum=0;

    sff(n,m);

    int c[n];
    bool cap[n];
    memset(cap,0,sizeof(cap));

    for(i=0; i<n; i++)
        sf(c[i]);

    int a[m];
    for(i=0; i<m; i++)
        sf(a[i]), sum+=c[a[i]-1], cap[a[i]-1]=true;

    //capitals
    for(i=0; i<m; i++)
    {
        cnt+=(c[a[i]-1]*(sum-c[a[i]-1]));
        sum-=c[a[i]-1];
    }

    //interconnection
    for(i=0; i<n-1; i++)
    {
        if(!cap[i] && !cap[i+1])
            cnt+=(c[i]*c[i+1]);
    }

    if(!cap[0] && !cap[n-1])
            cnt+=(c[0]*c[n-1]);

    //capital+others
    sum=0;
    for(i=0;i<n;i++)
    {
        if(!cap[i])
            sum+=c[i];
    }

    for(i=0;i<m;i++)
        cnt+=c[a[i]-1]*sum;

    pfl(cnt);

    return 0;
}
