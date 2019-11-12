/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 55
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

int dp[N][3];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    string s;

    for(i = 0; i < N; i++)
        dp[i][0] = dp[i][1] = dp[i][2] = inf;

    sff(n, m);
    for(i = 0; i < n; i++)
    {
        cin >> s;

        // move to the right
        j = 0, k = 0;
        while(j < m)
        {
            if(isdigit(s[j]))
                dp[i][0] = min(dp[i][0], min(k, m - k));
            else if(isalpha(s[j]))
                dp[i][1] = min(dp[i][1], min(k, m - k));
            else
                dp[i][2] = min(dp[i][2], min(k, m - k));

            k++, j++;
        }
    }

    ll ans = inf;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
         {
             if(i == j) continue;
             for(k = 0; k < n; k++)
             {
                 if(k == j || k == i) continue;
                 ans = min(ans, ll(dp[i][0] + dp[j][1] + dp[k][2]));
             }
         }
    }

    pfl(ans);

    return 0;
}
