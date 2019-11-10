/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 501010
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
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, l;

    sf(n);

    int even = n / 2, odd = n / 2 + n % 2;

    pf(2 * even + odd), nl;
    for(i = 2; i <= n; i += 2)
        pf(i), pfs(" ");

    for(i = 1; i <= n; i += 2)
        pf(i), pfs(" ");

    for(i = 2; i <= n; i += 2)
        pf(i), pfs(" ");

    return 0;
}
