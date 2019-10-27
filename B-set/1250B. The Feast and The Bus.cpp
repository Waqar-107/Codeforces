/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sff(n, k);
    int a[k + 1];
    memset(a, 0, sizeof(a));

    for(i = 0; i < n; i++)
        sf(m), a[m]++;

    vector<ll> vec;
    for(i = 1; i <= k; i++)
    {
        if(a[i])
            vec.pb(a[i]);
    }

    sort(vec.begin(), vec.end());

    n = vec.size();
    int rmax = n, rmin = n / 2 + n % 2;
    ll mx, ans = 1e18;

    if(n == 1)
    {
        pf(vec[0]);
        return 0;
    }

    for(i = rmin; i <= rmax; i++)
    {
        j = 0, k = 2 * (n - i) - 1;
        mx = 0;

        while(j < k)
        {
            mx = max(mx, vec[j] + vec[k]);
            j++, k--;
        }

        if(j == k)
            mx = max(mx, vec[j]);

        for(j = 2 * (n - i); j < n; j++)
            mx = max(mx, vec[j]);

        ans = min(ans, mx * i);
    }

    pf(ans);

    return 0;
}
