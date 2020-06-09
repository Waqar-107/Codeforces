/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
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

int a[N], cnt[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(n);
    for(i = 1; i <= n; i++)
    {
        sf(m);
        a[m] = i;
    }

    memset(cnt, 0, sizeof(cnt));
    for(i = 1; i <= n; i++)
    {
        sf(m);

        if(a[m] == i) cnt[0]++;
        else if(a[m] > i) cnt[a[m] - i]++;
        else cnt[n - i + a[m]]++;
    }

    int ans = 0;
    for(i = 0; i <= n; i++)
        ans = max(ans, cnt[i]);

    pf(ans);

    return 0;
}
