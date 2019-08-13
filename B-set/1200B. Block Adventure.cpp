/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t, r;

    sf(t);
    while(t--)
    {
        sff(n, m); sf(k);

        int h[n];
        for(i = 0 ; i < n; i++)
            sf(h[i]);

        bool f = true;
        for(i = 0; i < n - 1; i++)
        {
            r = max(0, h[i + 1] - k);
            m += h[i] - r;

            if(m < 0)
            {
                f = false;
                break;
            }
        }

        if(f)
            pfs("YES\n");
        else
            pfs("NO\n");
    }

    return 0;
}
