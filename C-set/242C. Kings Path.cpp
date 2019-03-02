/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
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
    int n, m;
    int a, b;
    int x, y;

    int x1, y1, x2, y2;

    sff(x1, y1);
    sff(x2, y2);

    map<pp, ll> dist;
    map<pp, bool> allow;
    map<pp, bool> vis;

    sf(n);
    for(i = 0; i < n; i++)
    {
        sf(k);
        sff(a, b);

        for(j = a; j <= b; j++)
            allow[{k, j}] = true;
    }

    allow[{x1, y1}] = true;
    allow[{x2, y2}] = true;

    queue<pp> q;
    dist[{x1, y1}] = 0;
    q.push({x1, y1});

    int dx[] = {-1, -1, -1, 1, 1, 1, 0, 0};
    int dy[] = {-1, 0, 1, -1, 0, 1, 1, -1};

    while(!q.empty())
    {
        pp u = q.front(); q.pop();

        for(i = 0; i < 8; i++)
        {
            x = u.first + dx[i];
            y = u.second + dy[i];

            if(allow[{x, y}] && !vis[{x, y}])
            {
                if(!dist[{x, y}] ||  dist[{x, y}] > dist[{u.first, u.second}] + 1)
                    dist[{x, y}] = dist[{u.first, u.second}] + 1, q.push({x, y});
            }
        }

        vis[{u.first, u.second}] = true;
    }

    if(vis[{x2, y2}])
        cout << dist[{x2, y2}];

    else
        pf(-1);

    return 0;
}
