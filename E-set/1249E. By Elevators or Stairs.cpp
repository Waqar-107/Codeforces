/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
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

int dp[N][2];
int a[N], b[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, c;

    sff(n, c);
    for(i = 2; i <= n; i++)
        sf(a[i]);

    for(i = 2; i <= n; i++)
        sf(b[i]);

    memset(dp, 0, sizeof(dp));

    pfs("0 ");

    dp[1][0] = 0;
    dp[1][1] = c;

    for(i = 2; i <= n; i++)
    {
        // to reach this floor we use stairs
        dp[i][0] = min(dp[i - 1][0] + a[i], dp[i - 1][1] + a[i]);

        // to reach this floor we use lift
        dp[i][1] = min(dp[i - 1][1] + b[i], dp[i - 1][0] + b[i] + c);

        pf(min(dp[i][0], dp[i][1])), pfs(" ");
    }

    return 0;
}
