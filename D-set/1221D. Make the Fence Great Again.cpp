/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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

ll dp[N * 3][3];
int a[N * 3], b[N * 3];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;

    sf(q);
    while(q--)
    {
        sf(n);
        for(i = 1; i <= n; i++)
            sff(a[i], b[i]);

        dp[1][1] = b[1];
        dp[1][2] = b[1] * 2;

        for(i = 2; i <= n; i++)
        {
            // 0
            dp[i][0] = inf;
            for(j = 0; j <= 2; j++)
            {
                if(a[i] != a[i - 1] + j)
                    dp[i][0] = min(dp[i][0], dp[i - 1][j]);
            }

            // 1
            dp[i][1] = inf;
            for(j = 0; j <= 2; j++)
            {
                if(a[i] + 1 != a[i - 1] + j)
                    dp[i][1] = min(dp[i][1], b[i] + dp[i - 1][j]);
            }

            // 2
            dp[i][2] = inf;
            for(j = 0; j <= 2; j++)
            {
                if(a[i] + 2 != a[i - 1] + j)
                    dp[i][2] = min(dp[i][2], b[i] * 2 + dp[i - 1][j]);
            }
        }

        /*for(i = 1; i <= n; i++)
            cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<endl;*/
        pfl(min(dp[n][0], min(dp[n][1], dp[n][2]))); nl;
    }


    return 0;
}
