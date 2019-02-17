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

    sf(n);
    int a[n];
    for(i=0;i<n;i++)sf(a[i]);

    sort(a,a+n);

    int sum=0, ans;
    for(i=0;i<n;i++)
        sum+=a[i];

    ans = sum;

    for(i=0;i<n;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            if(a[i] % j == 0)
            {
                k = sum - a[i] - a[0] + (a[i]/j) + (a[0]*j);
                ans=min(ans,k);
            }
        }
    }

    pf(ans);

    return 0;
}
