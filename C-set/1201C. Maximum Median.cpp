/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
#define inf 1e18
#define mod 100000007

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

    int i, j;
    int n, m;

    ll x, k;

    sf(n); sfl(k);

    ll a[n];
    for(i = 0; i < n; i++)
        sfl(a[i]);

    sort(a, a + n);

    ll lo = 1, hi = 2e9, mid, ans = a[n / 2];
    while(lo <= hi)
    {
        mid = (lo + hi) / 2;

        ll sum = 0;
        for(i = n / 2; i < n; i++)
        {
            if(mid > a[i])
                sum += mid - a[i];
        }

        if(sum <= k)
            ans = max(ans, mid), lo = mid + 1;
        else
            hi = mid - 1;
    }

    pfl(ans);

    return 0;
}
