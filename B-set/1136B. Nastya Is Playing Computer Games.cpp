/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200100
#define inf 1e6

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
    int n, m, x;

    sff(n, k);

    if(k == n || k == 1)
        m = 6 + (n - 2) * 3;

    else
    {
        m = 6 + (k - 2) * 3 + k - 1 + (n - k) * 3;
        x = 6 + (n - k - 1) * 3 + (n - k) + (k - 1) * 3;

        m = min(m, x);
    }

    pf(m);

    return 0;
}
