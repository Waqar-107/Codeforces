/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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

int dist[110][N];
bool vis[110][N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);

    int a[n + 1];
    for(i = 1; i <= n; i++)
        sf(a[i]), a[i]++;

    int r1, r2, c1, c2;
    sff(r1, c1);
    sff(r2, c2);

    queue<pp> q;
    q.push({r1, c1});
    dist[r1][c1] = 0;
    vis[r1][c1] = 1;

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    while(!q.empty())
    {
        pp u = q.front(); q.pop();

        for(i = 0; i < 4; i++)
        {
            int r = u.first + dx[i];
            int c = u.second + dy[i];

            if(dx[i] == 0 && (c < 1 || c > a[r]))
                continue;

            if(dx[i] == -1 && r >= 1 &&  a[u.first - 1] < u.second)
                c = a[u.first - 1];

            else if(dx[i] == 1 && r <= n && a[u.first + 1] < u.second)
                c = a[u.first + 1];

            if(r > 0 && r <= n && c > 0 && !vis[r][c])
            {
                vis[r][c] = true;
                dist[r][c] = dist[u.first][u.second] + 1;
                q.push({r, c});
            }
        }
    }

    pf(dist[r2][c2]);

    return 0;
}
