/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
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
    int n, m, d;

    sff(n, d);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    ll ans = 0, x;
    for(i = 0; i < n - 2; i++)
    {
        k = lower_bound(a, a + n, a[i] + d) - a;

        if(k == n)
            k--;

        else if(a[k] > a[i] + d)
            k--;

        if(k >= i + 2)
        {
            x = k - (i + 2) + 1;
            ans += (x * (x + 1)) / 2;
        }
    }

    pfl(ans);

    return 0;
}
