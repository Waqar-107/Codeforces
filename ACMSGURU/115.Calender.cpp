/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100
#define inf 1000000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,s;

    int d[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};
    s=1;

    sff(n,m);

    if(m<1 || m>12)
    {
        pfs("Impossible");
        return 0;
    }

    if(d[m]<n)
    {
        pfs("Impossible");
        return 0;
    }

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=d[i];j++)
        {
            if(i==m && j==n)
            {
                pf(s);
                return 0;
            }

            s++;
            if(s==8)
                s=1;
        }
    }

    return 0;
}
