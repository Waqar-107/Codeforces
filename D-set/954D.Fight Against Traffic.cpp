

#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1050
#define inf 1000000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;

int dist[N][N];
bool rasta[N][N];

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int s,t,x,y;
    int u,v;

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            dist[i][j]=inf;
            rasta[i][j]=0;

            if(i==j)
                dist[i][j]=0;
        }
    }

    scanf("%d%d%d%d",&n,&m,&s,&t);
    for(i=0; i<m; i++)
    {
        sf(u);
        sf(v);

        dist[u][v]=1;
        dist[v][u]=1;

        rasta[u][v]=1;
        rasta[v][u]=1;
    }

    //Floyd-Warshall
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    int cnt=0;//cout<<dist[s][t];nl
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(!rasta[i][j])
            {
                //cout<<i<<" "<<j;nl
                x=dist[s][i]+1+dist[j][t];
                y=dist[s][j]+1+dist[i][t];
                if(x>=dist[s][t] && y>=dist[s][t])
                    cnt++;
            }
        }
    }

    pf(cnt);

    return 0;
}
