/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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

    sff(n, m);

    int a[n];
    for(i = 0; i < n; i++) sf(a[i]);

    pp d[m];
    for(i = 0; i < m; i++)
        sff(d[i].first, d[i].second);

    sort(d, d + m);

    int sum[m];
    sum[0] = d[0].second;

    for(i = 1; i < m; i++)
        sum[i] = sum[i - 1] + d[i].second;

    for(i = 0; i < n; i++)
    {
        pp temp = {a[i], 0};
        k = lower_bound(d, d + m, temp) - d;

        if(k == m)
            k--;
        else if(d[k].first > a[i])
            k--;

        if(k >= 0)
            pf(sum[k]);
        else
            pf(0);

        pfs(" ");
    }

    return 0;
}
