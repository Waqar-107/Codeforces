/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
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

    sf(t);
    while(t--)
    {
        sf(n);

        int m1 = inf * 2, m2 = inf * 2;

        pp a[n];
        for(i = 0; i < n; i++)
            sf(a[i].first), m1 = min(m1, a[i].first);

        for(i = 0; i < n; i++)
            sf(a[i].second), m2 = min(m2, a[i].second);

        ll ans = 0;
        for(i = 0; i < n; i++)
        {
            j = a[i].first - m1;
            k = a[i].second - m2;

            ans += max(j, k);
        }

        pfl(ans); nl;
    }

    return 0;
}
