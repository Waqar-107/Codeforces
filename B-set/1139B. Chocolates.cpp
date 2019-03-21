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

    int i, j, k;
    int n, m;

    sf(n);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    ll ans = a[n - 1];
    int mx = a[n - 1];

    for(i = n - 2; i >= 0; i--)
    {
        if(a[i] < mx)
            ans += a[i], mx = a[i];
        else
            ans += min(max(0, mx - 1), a[i]), mx = min(max(0, mx - 1), a[i]);
    }

    pfl(ans);

    return 0;
}
