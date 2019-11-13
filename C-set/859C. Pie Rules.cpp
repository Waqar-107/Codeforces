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

int solve(int pos, int d)
{
    if(pos > n) return 0;
    if(dp[pos][d] != -1) return dp[pos][d];

    if(d)
        dp[pos][d] = max(a[pos] + solve(pos + 1, !d), solve(pos + 1, d));

    else
        dp[pos][d] = min(a[pos] + solve(pos + 1, d), solve(pos + 1, !d));

    return dp[pos][d];
}

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

    int ans = max(solve(1, 0), solve(1, 1));

    cout << (sum - ans) << " " << ans << endl;

    return 0;
}
