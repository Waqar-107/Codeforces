/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 2050
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int n,m;

int dist[N][N];
bool vis[N][N];

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

void bfs(int x,int y)
{
    int i,j,k;
    int u,v,d;

    memset(vis,0,sizeof(vis));
    queue<pp> q;

    q.push({x,y});
    dist[x][y]=1;

    while(!q.empty())
    {
        pp t=q.front();
        q.pop();

        d=dist[t.first][t.second];

        for(i=0;i<4;i++)
        {
            u=t.first+dx[i];
            v=t.second+dy[i];

            if(u>=1 && u<=n && v>=1 && v<=m)
            {
                if(!vis[u][v] && dist[u][v]>d+1)
                {
                    dist[u][v]=d+1;
                    q.push({u,v});
                }
            }
        }

        vis[t.first][t.second]=1;
    }
}

int main()
{
    int i,j,k;
    int x,y;

    for(i=0;i<N;i++)
        fill(dist[i],dist[i]+N,inf);

    sff(n,m);
    sf(k);

    for(i=0;i<k;i++)
    {
        sff(x,y);
        bfs(x,y);
    }

    int mx=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            mx=max(mx,dist[i][j]);
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(mx==dist[i][j])
            {
                pf(i);pf(j);
                return 0;
            }
        }
    }

    return 0;
}
