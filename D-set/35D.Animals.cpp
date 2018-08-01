/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int c[N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sff(n,m);

    for(i=1;i<=n;i++)
        sf(c[i]), c[i]*=(n-i+1);

    sort(c+1,c+n+1);

    k=0;
    for(i=1;i<=n;i++)
    {
        if(c[i]>m)
            break;

        m-=c[i];
        k++;
    }

    pf(k);

    return 0;
}
