/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 310
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

    sf(n);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    sort(a, a + n);

    deque<int> dq;
    dq.pb(a[n - 1]);

    k = 0;
    for(i = n - 2; i >= 0; i--)
    {
        if(k)
            dq.pb(a[i]);
        else
            dq.push_front(a[i]);

        k = 1 - k;
    }

    i = dq.front(), j = dq.back();
    dq.push_back(i);
    dq.push_front(j);

    for(i = 1; i <= n; i++)
    {
        if(dq[i - 1] + dq[i + 1] > dq[i]) continue;
        pfs("NO");
        return 0;
    }

    pfs("YES\n");
    for(i = 1; i <= n; i++)
        pf(dq[i]), pfs(" ");

    return 0;
}
