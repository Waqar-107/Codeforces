/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<ll,ll>
#define inf 10000000
#define N 510

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int u,v,d;

    scanf("%d",&n);

    int adj[n+1][n+1],dist[n+1][n+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&adj[i][j]);
            dist[i][j]=adj[i][j];
        }
    }

    ll sum=0;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
            sum+=adj[i][j];
    }

    scanf("%d",&m);
    while(m--)
    {
        scanf("%d%d%d",&u,&v,&d);

        if(adj[u][v]<=d)
        {
            printf("%I64d ",sum);
            continue;
        }

        adj[u][v]=d;
        adj[v][u]=d;

        //use u as middle of the route
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                adj[i][j]=min(adj[i][j],adj[i][u]+adj[u][j]);
        }

        //use v as middle of the route
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                adj[i][j]=min(adj[i][j],adj[i][v]+adj[v][j]);
        }

        //calculate the sum
        sum=0;
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
                sum+=adj[i][j];
        }

        printf("%I64d ",sum);
    }


    return 0;
}
