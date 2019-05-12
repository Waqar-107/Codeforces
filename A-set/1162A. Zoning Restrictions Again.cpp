/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, h;

    sff(n, h); sf(m);

    int l[m], r[m], x[m];
    for(i = 0; i < m; i++)
        sff(l[i], r[i]), sf(x[i]);

    int ans = 0;
    for(i = 1; i <= n; i++)
    {
        int mx = h;
        for(j = 0; j < m; j++)
        {
            if(l[j] <= i && i <= r[j])
                mx = min(mx, x[j]);
        }

        ans += mx * mx;
    }

    pf(ans);

    return 0;
}
