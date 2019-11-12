/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 35
#define inf 10000

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

ll dp[N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, L;

    sff(n, L);
    for(i = 0; i < n; i++)
        sfl(dp[i]);

    // minimize the value
    // we can replace 2^i by two 2^(i - 1)
    for(i = 1; i < n; i++)
        dp[i] = min(dp[i], 2 * dp[i - 1]);

    ll ans = 4e18;
    ll sum = 0;

    for(i = n - 1; i >= 0; i--)
    {
        k = L / (1 << i);
        sum += (ll)k * dp[i];
        L -= (1 << i) * k;
        ans = min(ans, sum + (L > 0) * dp[i]);
    }

    cout << ans;

    return 0;
}
