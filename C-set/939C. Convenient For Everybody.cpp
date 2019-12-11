/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
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
    int s, f, l, r;

    sf(n);

    int a[2 * n + 1];
    for(i = 1; i <= n; i++)
        sf(a[i]);

    for(i = n + 1; i <= 2 * n; i++)
        a[i] = a[i - n];

    ll sum = 0;

    sff(s, f);
    int len = f - s;
    for(i = 1; i <= len; i++)
        sum += a[i];

    ll ans = sum;
    t = inf;

    for(i = 2; i <= n; i++)
    {
        sum -= a[i - 1];
        sum += a[i + len - 1];

        if(sum == ans)
            t = min(t, (s - i + n) % n + 1);
        else if(sum > ans)
            ans = sum, t = (s - i + n) % n + 1;
    }

    if(t == inf) t = 1;
    pf(t);

    return 0;
}
