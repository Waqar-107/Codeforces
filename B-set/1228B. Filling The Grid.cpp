/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18

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

ll mod = 1000000007;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, h, w;

    sff(h, w);
    int a[h][w];
    memset(a, 0, sizeof(a));

    for(i = 0; i < h; i++)
    {
        sf(k);
        for(j = 0; j < k; j++)
            a[i][j] = 1;

        if(k < w)
            a[i][k] = 2;
    }

    for(i = 0; i < w; i++)
    {
        sf(k);
        for(j = 0; j < k; j++)
        {
            if(a[j][i] == 2){pf(0); return 0;}
            a[j][i] = 1;
        }

        if( k < h && a[k][i] == 1){pf(0); return 0;}

        if(k < h)
            a[k][i] = 2;
    }

    ll cnt = 0;
    for(i = 0; i < h; i++)
    {
        for(j = 0; j < w; j++)
        {
            if(a[i][j] == 0)
                cnt++;
        }
    }

    ll p = 1, sum = 0;
    while(cnt--)
    {
        p = ((p % mod) * (2)) % mod;
    }

    pfl(p);

    return 0;
}
