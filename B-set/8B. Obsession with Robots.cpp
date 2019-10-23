/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 500
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

int adj[N][N];
bool vis[N][N];
int dist[N][N];

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    string s;

    cin >> s;

    i = 110, j = 110;
    n = s.length();

    memset(adj, 0, sizeof(adj));
    memset(vis, 0, sizeof(vis));

    for(k = 0; k < n; k++)
    {
        if(s[k] == 'R')
            j++;

        else if(s[k] == 'L')
            j--;

        else if(s[k] == 'U')
            i--;

        else
            i++;

        adj[i][j] = 1;
    }

    int ti = i;
    int tj = j;

    i = 110, j = 110;

    queue<pp> q;
    q.push({i, j});
    vis[i][j] = true;
    dist[i][j] = 0;

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    while(!q.empty())
    {
        pp u = q.front();
        q.pop();

        for(k = 0; k < 4; k++)
        {
            int x = u.first + dx[k];
            int y = u.second + dy[k];

            if(adj[x][y] && !vis[x][y])
            {
                dist[x][y] = 1 + dist[u.first][u.second];
                vis[x][y] = true;
                q.push({x, y});
            }
        }
    }

    if(dist[ti][tj] == n)
        pfs("OK\n");
    else
        pfs("BUG\n");

    return 0;
}
