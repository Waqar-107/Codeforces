/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 20
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

ll dp[N][1 << N];
int sat[N];
int n, m;
int sp[N][N];

ll solve(int idx, int mask)
{
    // if already m dishes are eaten
    if(__builtin_popcount(mask) == m)
        return 0;

    if(dp[idx][mask] != -1)
        return dp[idx][mask];

    // idx was taken last now we try to take others

    ll ret = 0;
    for(int i = 0; i < n; i++)
    {
        if(!(mask & (1 << i)))
            ret = max(ret, sat[i + 1] + sp[idx][i + 1] + solve(i + 1, mask | (1 << i)));
    }

    return dp[idx][mask] = ret;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int x, y;

    sff(n, m), sf(k);
    for(i = 1; i <= n; i++)
        sf(sat[i]);

    for(i = 0; i < N; i++)
        fill(dp[i], dp[i] + (1 << N), -1);

    memset(sp, 0, sizeof(sp));
    for(i = 0; i < k; i++)
        sff(x, y), sf(sp[x][y]);

    cout << solve(0, 0);

    return 0;
}
