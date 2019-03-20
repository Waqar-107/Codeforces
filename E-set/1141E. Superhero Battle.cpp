/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
#define inf 1e18

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
#define pp pair<ll , ll>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    ll i, j, k;
    ll n, m, p;

    sffl(p, n);

    ll sum = 0;
    ll a[n];

    bool flag = false;
    for(i = 0; i < n; i++)
    {
        sfl(a[i]), sum += a[i];

        if(p + sum <= 0)
            flag = true;
    }

    if(!flag && sum >= 0)
    {
        pfs("-1\n");
        return 0;
    }

    ll sum2 = 0, x, ans = inf;
    for(i = 0 ; i < n; i++)
    {
        sum2 += a[i];

        //done in first round, x = 0
        if(p + sum2 <= 0)
            ans = min(ans, i + 1);
    }

    //we need x rounds first then some minutes to defeat the monster
    if(ans == inf)
    {
        sum2 = 0;
        for(i = 0; i < n; i++)
        {
            sum2 += a[i];
            k = p + sum2;

            x = abs(k) / abs(sum);
            if(abs(k) % abs(sum) != 0)
                x++;

            if(x * sum < p && x * sum + sum2 + p <= 0)
                ans = min(ans, x * n + i + 1);

            //if ends here and x rounds have passed before
            // p + x * sum + sum2 <= 0
            // x >= -(p + sum2) / sum
        }
    }

    pfl(ans);

    return 0;
}
