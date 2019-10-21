/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 110
#define inf 1e9

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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, mod, x;

    sff(n, m), sf(mod);

    int a[n], b[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    for(i = 0; i < m; i++)
        sf(b[i]);

    int sum = 0; k = 0;
    for(i = 0; i < n; i++)
    {
        if(i + 1 <= n - m + 1)
        {
            if(i < m)
                sum += b[i];
        }

        else
        {
            sum  -= b[k++];
            if(i < m)
                sum += b[i];
        }

        x = (a[i] + sum) % mod;
        pf(x); pfs(" ");
    }

    return 0;
}
