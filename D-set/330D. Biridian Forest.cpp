/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1010
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

string adj[N];
bool vis[N][N];
int dist[N][N];
int n, m;
pp src, dest;
vector<pair<pp, int>> breader;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void bfs(int r, int c)
{
    for(int i = 0; i < N; i++)
        fill(dist[i], dist[i] + N, inf);

    memset(vis, 0, sizeof(vis));

    vis[r][c] = true;
    dist[r][c] = 0;
    queue<pp> q;
    q.push({r, c});

    while(!q.empty())
    {
        pp u = q.front();
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int x = dx[i] + u.first;
            int y = dy[i] + u.second;

            if(x >=0 && y >= 0 && x < n && y < m && !vis[x][y] && adj[x][y] != 'T')
                vis[x][y] = true, q.push({x, y}), dist[x][y] = 1 + dist[u.first][u.second];
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int u, v;

    sff(n, m);
    for(i = 0; i < n; i++) cin >> adj[i];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(adj[i][j] == 'E')
                dest = make_pair(i, j);
            else if(adj[i][j] == 'S')
                src =make_pair(i, j);
            else if(isdigit(adj[i][j]))
                breader.pb(make_pair(make_pair(i, j), adj[i][j] - '0'));
        }
    }

    bfs(src.first, src.second);
    int dist_src = dist[dest.first][dest.second];

    bfs(dest.first, dest.second);

    int ans = 0;
    for(pair<pp, int> e : breader)
    {
        k = dist[e.first.first][e.first.second];
        if(k <= dist_src)
            ans += e.second;
    }

    pf(ans);

    return 0;
}
