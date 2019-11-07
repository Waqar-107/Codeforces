/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 400100
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
#define pp pair<ll, ll>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sff(n, m);

    ll x[n], p[m];
    for(i = 0; i < n; i++) sfl(x[i]);
    for(i = 0; i < m; i++) sfl(p[i]);

    vector<ll> diff;
    for(i = 1; i < n; i++)
        diff.pb(x[i] - x[i - 1]);

    ll gcd;
    if(diff.empty())
        gcd = x[0];

    else
    {
        gcd = diff[0];
        for(i = 1; i < diff.size(); i++)
            gcd = __gcd(gcd, diff[i]);
    }

    ll ans2 = -1;
    for(i = 0; i < m; i++)
    {
        if(gcd % p[i] == 0)
        {
            ans2 = i + 1;
            break;
        }
    }

    if(ans2 == -1) {
        pfs("NO\n");
        return 0;
    }

    pfs("YES\n");
    cout << x[0] << " " << ans2;

    return 0;
}
