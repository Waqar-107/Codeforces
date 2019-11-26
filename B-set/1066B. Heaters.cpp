/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 2010
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>
#define mod 1000000007

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, ans = 0, r;

    sff(n, r);

    int a[n + 1], h[n + 1];
    for(i = 1; i <= n; i++)
        sf(a[i]);

    memset(h, 0, sizeof(h));
    for(i = 1; i <= n; i++)
    {
        if(h[i]) continue;

        ans++;
        k = -1;

        m = min(i + r - 1, n);
        for(j = i; j <= m; j++)
        {
            if(a[j])
                k = j;
        }

        // check in the left
        if(k == -1)
        {
            m = max(1, i - r + 1);
            for(j = i; j >= m; j--)
            {
                if(a[j]){
                    k = j;
                    break;
                }
            }
        }

        if(k == -1){
            pf(-1); return 0;
        }

        // used
        a[k] = 0;

        m = min(r + k - 1, n);
        for(j = k; j <= m; j++)
            h[j] = 1;

        m = max(1, k - r + 1);
        for(j = k; j >= m; j--)
            h[j] = 1;
    }

    pf(ans);

    return 0;
}
