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
    int n, m;

    sff(n, k);

    int hi = n, lo = 1, mid;
    int mx_occurence = 1, mn_val = 1e9 + 1;
    int a[n + 1];
    ll sum[n + 1];

    for(i = 1; i <= n; i++)
        sf(a[i]), mn_val = min(mn_val, a[i]);

    sort(a + 1, a + n + 1);

    memset(sum, 0, sizeof(sum));
    for(i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + a[i];

    while(lo <= hi)
    {
        mid = (hi + lo) / 2;

        ll temp, x;
        int mn = 1e9 +1;
        //cout<<"mid: "<<mid;nl;
        for(i = 1; i <= n - mid + 1; i++)
        {
            temp = sum[i + mid - 1] - sum[i - 1];
            x = a[i + mid - 1];

            if(abs(mid * x - temp) <= k)
                mn = min((int)x, mn);
        }

        if(mn < 1e9 + 1)
        {
            if(mid > mx_occurence)
            {
                mx_occurence = mid;
                mn_val = mn;
            }

            lo = mid + 1;
        }

        else
            hi = mid - 1;
    }

    pff(mx_occurence, mn_val);

    return 0;
}
