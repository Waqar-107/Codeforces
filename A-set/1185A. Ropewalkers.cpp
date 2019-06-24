/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
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
#define pp pair<ll,ll>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int a[3], d;

    for(i = 0; i < 3; i++)
        sf(a[i]);

    sf(d);
    sort(a, a + 3);

    ll ans = max(0, d - a[1] + a[0]) + max(0, d - a[2] + a[1]);
    pfl(ans);

    return 0;
}
