/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 110
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

int n, a[N][N];
int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};

void dfs(int r, int c, int col)
{
    a[r][c] = col;
    // pff(r, c);nl;
    for(int i = 0; i < 8; i++)
    {
        int x = dx[i] + r;
        int y = dy[i] + c;

        if(x > 0 && y > 0 && x <= n && y <= n && a[x][y] == -1)
            dfs(x, y, 1 - col);
    }
}

int main()
{
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int m, q;

    sf(n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            a[i][j] = -1;
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(a[i][j] == -1)
                dfs(i, j, 0);
        }
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(a[i][j] == 0)
                pfs("W");

            else if(a[i][j] == 1)
                pfs("B");

            else pfs("#");
        }nl;
    }

    return 0;
}
