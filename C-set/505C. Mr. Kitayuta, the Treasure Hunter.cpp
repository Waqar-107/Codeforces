/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 30110
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

int dp[N][2000], gem[N], ans = 0;
int dfs(int curr, int l)
{
    if(dp[curr][l] != -1) return dp[curr][l];

    int x;
    dp[curr][l] = 0;

    int res = 0;
    for(int i = -1; i <= 1; i++)
    {
        x = curr + l + i;
        if(x <= 30001 && x > curr)
            res = max(res, dfs(x, l + i));
    }

    dp[curr][l] = res + gem[curr];
    ans = max(ans, dp[curr][l]);

    return dp[curr][l];
}


int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, d;

    sff(n, d);
    memset(gem, 0, sizeof(gem));
    for(i = 0; i < n; i++)
    {
        sf(m);
        gem[m]++;
    }

    for(i = 0; i < N; i++)
        fill(dp[i], dp[i] + 2000, -1);

    dfs(d, d);
    pf(ans);

    return 0;
}
