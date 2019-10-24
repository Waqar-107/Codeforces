/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 550
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

int mp[N][N];
int row[N][N], col[N][N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int w, h;
    string s;

    sff(h, w);
    for(i = 1; i <= h; i++)
    {
        cin >> s;
        for(j = 1; j <= w; j++)
        {
            if(s[j - 1] == '.')
                mp[i][j] = 1;
            else
                mp[i][j] = 0;
        }
    }

    memset(row, 0, sizeof(row));
    for(i = 1; i <= h; i++)
    {
        for(j = 1; j <= w; j++)
        {
            row[i][j] = row[i][j - 1];
            // can we place a domino here?
            if(j < w && mp[i][j] == 1 && mp[i][j + 1] == 1)
                row[i][j]++;
        }
    }

    memset(col, 0, sizeof(col));
    for(i = 1; i <= w; i++)
    {
        for(j = 1; j <= h; j++)
        {
            col[j][i] = col[j - 1][i];
            if(mp[j][i] == 1 && mp[j + 1][i] == 1)
                col[j][i]++;
        }
    }

    int r1, c1, r2, c2, q;

    sf(q);
    while(q--)
    {
        sff(r1, c1);
        sff(r2, c2);

        int cnt = 0;
        for(i = r1; i <= r2; i++)
            cnt += row[i][c2 - 1] - row[i][c1 - 1];

        for(j = c1; j <= c2; j++)
            cnt += col[r2 - 1][j] - col[r1 - 1][j];

        pf(cnt); nl;
    }

    return 0;
}
