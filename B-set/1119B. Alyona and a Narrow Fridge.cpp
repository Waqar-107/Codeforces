/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 301010
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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n;
    ll m, h;

    sf(n); sfl(h);

    int a[n], b[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    int ans = 1, hi = n, lo = 1, mid;
    while(lo <= hi)
    {
        mid = (hi + lo) / 2;

        for(i = 0; i < mid; i++)
            b[i] = a[i];

        sort(b, b + mid);

        m = 0;
        for(i = mid - 1; i >=0; i -= 2)
        {
            if(i - 1 >= 0)
                m += b[i];
        }

        if(mid % 2)
            m += b[0];

        if(m <= h)
            ans = max(ans, mid), lo = mid + 1;
        else
            hi = mid - 1;
    }

    pf(ans);

    return 0;
}
