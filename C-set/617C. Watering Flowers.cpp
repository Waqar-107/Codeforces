/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1100
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
    int n, m, d;
    ll x, y;
    ll x1, y1, x2, y2;

    sf(n);
    sffl(x1, y1);
    sffl(x2, y2);

    vector<pp> vec(n);
    ll mx[n + 1];
    memset(mx, 0, sizeof(mx));

    for(i = 0; i < n; i++)
    {
        sffl(x, y);

        vec[i].first = (x - x1) * (x - x1) + (y - y1) * (y - y1);
        vec[i].second = (x - x2) * (x - x2) + (y - y2) * (y - y2);
    }

    sort(vec.begin(), vec.end());
    for(i = n - 1; i >= 0; i--)
        mx[i] = max(vec[i].second, mx[i + 1]);

    ll r1, r2;
    ll ans = 1e18;

    for(i = 0; i < n; i++)
    {
        r1 = vec[i].first;
        r2 = mx[i + 1];

        ans = min(ans, r1 + r2);

        r2 = mx[i];
        if(i == 0)
            r1 = 0;
        else
            r1 = vec[i - 1].first;

        ans = min(ans, r1 + r2);
    }

    pfl(ans);

    return 0;
}
