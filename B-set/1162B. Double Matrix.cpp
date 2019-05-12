/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sff(n, m);

    int a[n][m], b[n][m];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            sf(a[i][j]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            sf(b[i][j]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(a[i][j] > b[i][j])
                swap(a[i][j], b[i][j]);
        }
    }

    //check
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m - 1; j++)
        {
            if(a[i][j] >= a[i][j + 1] || b[i][j] >= b[i][j + 1])
            {
                pfs("Impossible");
                return 0;
            }
        }
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(a[i][j] >= a[i + 1][j] || b[i][j] >= b[i + 1][j])
            {
                pfs("Impossible");
                return 0;
            }
        }
    }

    pfs("Possible");

    return 0;
}
