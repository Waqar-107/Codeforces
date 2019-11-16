/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
#define inf 10000

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

int a[N * 3], pre[N * 3];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, z;
    int mx = 0, len, xi = -1, xj = -1;

    sff(n, k);
    pre[0] = 0;
    for(i = 1; i <= n; i++)
        sf(a[i]), pre[i] = pre[i - 1] + a[i];

    i = 1, j = 1;
    while(j <= n)
    {
        // segment size
        len = j - i + 1;

        // ones
        m = pre[j] - pre[i - 1];

        // zeros
        z = len - m;

        // move j
        if(z <= k)
        {
            if(len > mx)
                mx = len, xi = i, xj = j;

            j++;
        }

        else
        {
            i++;
            if(j <= i) j = i;
        }
    }

    pf(mx), nl;
    for(i = 1; i <= n; i++)
    {
        if(xi <= i && i <= xj)
            a[i] = 1;

        pf(a[i]), pfs(" ");
    }

    return 0;
}

