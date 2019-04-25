/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
#define inf 1e8

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

    int e1, o1, e2, o2;
    e1 = e2 = o1 = o2 = 0;

    sff(n, m);
    for(i = 0; i < n; i++)
    {
        sf(k);

        if(k % 2)
            o1++;
        else
            e1++;
    }

    for(i = 0; i < m; i++)
    {
        sf(k);

        if(k % 2)
            o2++;
        else
            e2++;
    }

    int ans = min(o1, e2) + min(e1, o2);
    pf(ans);

    return 0;
}
