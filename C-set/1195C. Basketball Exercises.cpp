/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200100
#define inf 1e18
#define mod 998244353

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

vector<int> vec[15];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, l = 0;

    sf(n);

    ll a[n], b[n];

    for(i = 0; i < n; i++)
        sfl(a[i]);

    for(i = 0; i < n; i++)
        sfl(b[i]);

    ll dp[n][3];

    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = 0;

    for(i = 1; i < n; i++)
    {
        dp[i][2] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i];
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i];
    }

    pfl(max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2])));

    return 0;
}
