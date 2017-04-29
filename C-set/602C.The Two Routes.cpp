/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int mat[401][401];
int trainVis[401],busVis[401];
int trainDist[401],busDist[401];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    //freopen("in.txt","r",stdin);

    memset(mat,0,sizeof(mat));

    int i,j,k;
    int n,m;
    int u,v;

    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        mat[u][v]=1;mat[v][u]=1;
    }

    memset(busDist,-1,sizeof(busDist));
    memset(busVis,0,sizeof(busVis));

    memset(trainDist,-1,sizeof(trainDist));
    memset(trainVis,0,sizeof(trainVis));

    queue<ll> q;

    //bfs for train
    trainDist[1]=0;
    q.push(1);

    while(!q.empty())
    {
        u=q.front();q.pop();

        if(trainVis[u])
            continue;

        trainVis[u]=1;
        for(i=1;i<=n;i++)
        {
            if(mat[u][i]==1 && (trainDist[u]+1<trainDist[i] || trainDist[i]<0))
            {
                trainDist[i]=trainDist[u]+1;
                q.push(i);
            }
        }
    }

    //bfs for bus
    busDist[1]=0;
    q.push(1);

    while(!q.empty())
    {
        u=q.front();q.pop();

        if(busVis[u])
            continue;

        busVis[u]=1;
        for(i=1;i<=n;i++)
        {
            if(mat[u][i]==0 && (busDist[u]+1<busDist[i] || busDist[i]<0))
            {
                busDist[i]=busDist[u]+1;
                q.push(i);
            }
        }
    }

    /*for(i=1;i<=n;i++)
        cout<<trainDist[i]<<" ";

    cout<<endl;

    for(i=1;i<=n;i++)
        cout<<busDist[i]<<" ";*/

    if(busDist[n]==-1 || trainDist[n]==-1)
        cout<<"-1";
    else
        cout<<max2(busDist[n],trainDist[n]);

    cin.clear();
    cin.ignore();
    cin.get();

    return 0;
}
