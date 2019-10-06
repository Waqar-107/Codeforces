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

    ll i, j, k;
    ll n, m, q;

    sfl(n);

    ll a[n], b[n];
    ll cnt[n];

    for(i = 0; i < n; i++)
        sfl(a[i]);

    for(i = 0; i < n; i++)
        sfl(b[i]);

    memset(cnt, 0, sizeof(cnt));
    for(i = 1; i <= n; i++)
    {
        cnt[i - 1] = (n - i + 1);
        cnt[i - 1] += (i - 1) * (n - i + 1);
    }

    for(i = 0; i < n; i++)
        cnt[i] *= a[i];

    sort(cnt, cnt + n);
    sort(b, b + n, greater<ll>());

    ll sum = 0, mult;
    for(i = 0; i < n; i++)
    {
        // cout<<cnt[i]<<" "<<b[i]<<endl;
        mult = ((cnt[i] % mod) * ((ll)b[i] % mod)) % mod;
        sum = ((sum % mod) + (mult % mod)) % mod;
    }

    pfl(sum);

    return 0;
}
