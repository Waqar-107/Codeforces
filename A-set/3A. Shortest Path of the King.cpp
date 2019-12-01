/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 201010
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
#define pp pair<int,int>

using namespace std;

bool vis[9][9];
pp parent[9][9];
int dist[9][9];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    string src, target;
    cin >> src >> target;

    int c1 = src[0] - 'a' + 1;
    int r1 = 8 - (src[1] - '0') + 1;
    int c2 = target[0] - 'a' + 1;
    int r2 = 8 - (target[1] - '0') + 1;

    int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
    int dy[] = {0, 1, -1, 0, 1, -1, 1, -1};

    memset(vis, 0, sizeof(vis));

    queue<pp> q;
    q.push({r1, c1});
    vis[r1][c1] = true;
    dist[r1][c1] = 0;
    parent[r1][c1] = {-1, -1};

    int x, y;
    while(!q.empty())
    {
        pp u = q.front();
        q.pop();

        for(i = 0; i < 8; i++)
        {
            x = dx[i] + u.first;
            y = dy[i] + u.second;

            if(x > 0 && y > 0 && x <= 8 && y <= 8 && !vis[x][y])
            {
                dist[x][y] = dist[u.first][u.second] + 1;
                vis[x][y] = true;
                parent[x][y] = {u.first, u.second};
                q.push({x, y});
            }
        }
    }

    pp u = {r2, c2};
    vector<string> ans;
    while(parent[u.first][u.second].first != -1)
    {
        x = parent[u.first][u.second].first;
        y = parent[u.first][u.second].second;

        // right
        if(x == u.first && y + 1== u.second)
            ans.pb("R");

        // left
        else if(x == u.first && y - 1 == u.second)
            ans.pb("L");

        // up
        else if(x - 1 == u.first && y == u.second)
            ans.pb("U");

        // down
        else if(x + 1 == u.first && y == u.second)
            ans.pb("D");

        // up-right
        else if(x - 1 == u.first && y + 1== u.second)
            ans.pb("RU");

        // up-left
        else if(x - 1 == u.first && y - 1== u.second)
            ans.pb("LU");

        // down-right
        else if(x + 1 == u.first && y + 1== u.second)
            ans.pb("RD");

        // down-left
        else ans.pb("LD");

        u = {x, y};
    }

    reverse(ans.begin(), ans.end());

    pf(dist[r2][c2]), nl;
    for(string e : ans)
        cout << e << endl;

    return 0;
}
