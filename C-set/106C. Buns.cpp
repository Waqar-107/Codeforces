/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1010
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

int dp[15][N];
int a[15], b[15], c[15], d[15];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sff(n, m);
    sff(c[0], d[0]);

    for(i = 1; i <= m; i++)
    {
        sff(a[i], b[i]);
        sff(c[i], d[i]);
    }

    memset(dp, 0, sizeof(dp));
    int ans = (n / c[0]) * d[0];

    // bun without any stuffings
    for(j = 1; j <= n; j++)
    {
        k = 1;
        while(j - c[0] * k >= 0)
            dp[0][j] = k * d[0], k++;
    }

    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            // not making any of this types of bun
            dp[i][j] = dp[i - 1][j];

            k = 1;
            while((j - c[i] * k) >= 0 && (a[i] - b[i] * k) >= 0)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - c[i] * k] + d[i] * k);
                k++;
            }
        }
    }

    pf(dp[m][n]);

    return 0;
}
