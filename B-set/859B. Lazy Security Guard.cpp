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

int main()
{
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;

    sf(n);
    m = sqrt(n);

    int ans = m * 2;
    int extra = n - (m * m);

    if(!extra)
    {
        pf(m * 4);
        return 0;
    }

    int r, c;
    q = inf * 2;
    for(i = 0; i <= extra; i++)
    {
        r = i;
        c = extra - r;

        if(r > m || c > m) continue;

        k = r + c;
        if(r) k += 2;
        if(c) k += 2;

        k += (m - r) + (m - c);
        q = min(q, k);
    }

    pf(ans + q);

    return 0;
}

