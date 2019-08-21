/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
#define inf 1e18
#define mod 100000007

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
    int n, q;
    ll m, l, r, d;

    sf(q);
    while(q--)
    {
        sffl(l, r); sfl(d);

        if(d == 1)
        {
            if(l > 1)
                pf(1);
            else
                pfl(r + 1);

            nl;
            continue;
        }

        if(d < l)
        {
            pfl(d); nl;
            continue;
        }

        if(d > r)
        {
            pfl(d); nl;
            continue;
        }

        m = l / d;
        if(l % d == 0)
            m--;

        if(m * d > 0)
        {
            pfl(m * d); nl;
            continue;
        }

        m = r / d;
        m++;
        pfl(m * d);nl;
    }


    return 0;
}
