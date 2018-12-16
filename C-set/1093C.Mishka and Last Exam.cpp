/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200100

#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n, m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n, m) printf("%d %d",n,m)
#define pffl(n, m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

ll a[N], b[N];

int main() {
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);
    for (i = 1; i <= n / 2; i++)
        sfl(b[i]);

    ll mx, mn;

    a[1] = 0;
    a[n] = b[1];
    mx = a[n], mn = a[1];

    m = n / 2;
    for (i = 2; i <= m; i++) {
        if (b[i] - mn <= mx) {
            a[i] = mn;
            a[n - i + 1] = b[i] - a[i];
            mx = a[n - i + 1];
        } else {
            a[n - i + 1] = mx;
            a[i] = b[i] - a[n - i + 1];
            mn = a[i];
        }
    }

    for (i = 1; i <= n; i++)
        pfl(a[i]), pfs(" ");

    return 0;
}
