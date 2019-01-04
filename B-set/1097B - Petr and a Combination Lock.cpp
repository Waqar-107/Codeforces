/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%lld%lld",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<string,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,sum;

    sf(n);

    int a[n];
    for(i=0;i<n;i++)
        sf(a[i]);

    //check all combinations of 0 and 1 of len n
    m=1<<n;
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if((1<<j)&i) sum+=a[j];
            else sum-=a[j];
        }

        if(sum%360==0)
        {
            pfs("YES\n");
            return 0;
        }
    }

    pfs("NO\n");

    return 0;
}
