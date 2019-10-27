/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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

int cur[N], a[N];
pp ans[N];

int main()
{
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int x, y, z;

    sff(n, m);
    for(i = 1; i <= n; i++)
        cur[i] = i, ans[i] = {i, i}, a[i] = i;

    for(i = 0; i < m; i++)
    {
        sf(k);

        // if k's current position in not 1 then it will go up
        x = cur[k];

        if(x > 1)
        {
            // k will go to x - 1 now, so whoever is in x - 1 it will get down
            y = a[x - 1];

            cur[k]--;
            cur[y]++;

            swap(a[x], a[x - 1]);

            ans[k].first = min(ans[k].first, cur[k]);
            ans[k].second = max(ans[k].second, cur[k]);

            ans[y].first = min(ans[y].first, cur[y]);
            ans[y].second = max(ans[y].second, cur[y]);
        }
    }

    for(i = 1; i <= n; i++)
        pff(ans[i].first, ans[i].second), nl;

    return 0;
}
