/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
#define inf 1e6

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d", n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, ans;
    int x, y;

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    sff(n, m);

    int cnt[n][m];
    char s[n][m];
    bool vis[n][m];

    memset(cnt, 0, sizeof(cnt));

    for(i = 0; i < n; i++)
        scanf("%s", s[i]);

    ans = 0;
    queue<pp> pq;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            vis[i][j] = 0;
            if(s[i][j] == 'X'){
                ans++;
                continue;
            }

            for(k = 0; k < 4; k++)
            {
                x = dx[k] + i;
                y = dy[k] + j;

                if(x >= 0 && y >= 0 && x < n && y < m && s[x][y] == 'X')
                    cnt[i][j]++;
            }

            if(cnt[i][j] >= 2)
                pq.push({i, j}), vis[i][j] = 1;
        }
    }

    while(pq.size())
    {
        pp u = pq.front(); pq.pop();

        if(cnt[u.first][u.second] >= 2)
        {
            ans++;
            for(k = 0; k < 4; k++)
            {
                x = dx[k] + u.first;
                y = dy[k] + u.second;

                if(x >= 0 && y >= 0 && x < n && y < m && s[x][y] == '.' && !vis[x][y])
                {
                    cnt[x][y]++;
                    if(cnt[x][y] >= 2)
                        pq.push({x, y}), vis[x][y] = 1;
                }
            }
        }
    }

    pf(ans);

    return 0;
}
