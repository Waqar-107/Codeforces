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
#define pp pair<ll, ll>

using namespace std;

bool cmp(pp a, pp b)
{
    return (a.first - a.second) > (b.first - b.second);
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);

    pp a[n];
    ll sum = 0;

    for(i = 0; i < n; i++)
        sffl(a[i].first, a[i].second), sum += (n * a[i].second - a[i].first);

    sort(a, a + n, cmp);

    for(i = 1; i <= n; i++)
        sum += i * (a[i - 1].first - a[i - 1].second);

    pfl(sum);

    return 0;
}
