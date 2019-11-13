/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 55
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
#define pp pair<ll, ll>

using namespace std;

int dp[N][2];
int a[N], n, sum;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;

    sf(n);
    sum = 0;
    for(i = 1; i <= n; i++)
        sf(a[i]), sum += a[i];

    for(i = 0; i < N; i++)
        dp[i][0] = dp[i][1] = -1;

    // in the last round whoever has the decider will definitely have the slice
    dp[n][1] = a[n];
    dp[n][0] = 0;

    for(i = n - 1; i > 0; i--)
    {
        dp[i][1] = max(a[i] + dp[i + 1][0], dp[i + 1][1]);
        dp[i][0] = min(a[i] + dp[i + 1][0], dp[i + 1][1]);
    }

    cout << dp[1][0] << " " << dp[1][1] << endl;

    return 0;
}
