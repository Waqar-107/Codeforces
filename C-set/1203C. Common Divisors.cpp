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

int main()
{
    freopen("in.txt", "r", stdin);

    ll i, j, k;
    ll n, m;

    sfl(n);

    ll a[n];
    for(i = 0; i < n; i++)
        sfl(a[i]);

    ll g = a[0];
    for(i = 1; i < n; i++)
        g = __gcd(g, a[i]);

    ll sq = sqrt(g * 1.0) + 1;
    set<ll> s;

    for(i = 1; i <= sq; i++)
    {
        if(g % i == 0)
            s.insert(g / i), s.insert(i);
    }

    cout << s.size() << endl;

    return 0;
}
