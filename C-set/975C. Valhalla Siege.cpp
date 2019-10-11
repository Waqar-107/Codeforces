/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
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
    int n, m, q;

    sff(n, q);

    ll a[n];
    memset(a, 0, sizeof(a));

    for(i = 0; i < n; i++)
    {
        sf(m);

        if(i > 0)
            a[i] = a[i - 1] + m;
        else
            a[i] = m;
    }

    ll x, arrow = 0;
    for(i = 1; i <= q; i++)
    {
        sfl(x);

        arrow += x;

        k = lower_bound(a, a + n, arrow) - a;

        // all men down, Thor do your magic!!!
        if(k >= n)
            pf(n), arrow = 0;

        else
        {
            if(a[k] > arrow)
                k--;

            // cout<<"done till "<<k<<endl;
            if(k == n - 1)
                pf(n), arrow = 0;

            else
                pf(n - k - 1);
        }

        nl;
    }

    return 0;
}
