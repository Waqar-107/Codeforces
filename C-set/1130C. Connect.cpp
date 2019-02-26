/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100
#define inf 1e6

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

int distance(int r1, int c1, int r2, int c2)
{
    return (r1 - r2)*(r1 - r2) + (c1 - c2)*(c1 - c2);
}

int n;
bool inside(int x,int y)
{
    return (x > 0 && y > 0 && x <=n && y <=n);
}

int mp[N][N];
bool vis[N][N];
vector<pp> vec[2];


int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(pp s, int idx)
{
    vis[s.first][s.second] = 1;
    vec[idx].pb({s.first, s.second});

    for(int i = 0; i < 4; i++)
    {
        int x = dx[i] + s.first;
        int y = dy[i] + s.second;

        if(inside(x, y) && !mp[x][y] && !vis[x][y])
            dfs({x, y}, idx);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int m, x, y;
    int r1, c1, r2, c2;

    sf(n);
    sff(r1, c1);
    sff(r2, c2);

    string s;
    for(i = 1; i <= n; i++)
    {
        cin >> s;

        for(j = 1; j <= n; j++)
            mp[i][j] = s[j - 1] - 48;
    }

    memset(vis, 0, sizeof(vis));

    dfs({r1, c1}, 0);
    if(vis[r2][c2]){
        pfs("0");
        return 0;
    }

    dfs({r2, c2}, 1);

    int ans = inf;
    for(pp e : vec[0])
    {
        for(pp e2 : vec[1])
            ans =min(ans, distance(e.first, e.second, e2.first, e2.second));
    }

    pf(ans);

    return 0;
}
