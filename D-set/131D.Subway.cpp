/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

class Graph
{
    int n,bu,bv;
    int *parent,*dist;
    bool *vis,*isCycle,cf;
    vector<int> *adj;
public:
    Graph(int v)
    {
        n=v; cf=false;
        parent=new int[n+1];
        vis=new bool[n+1];
        dist=new int[n+1];
        isCycle=new bool[n+1];

        adj=new vector<int>[n+1];

        for(int i=0;i<=n;i++)
            dist[i]=0,vis[i]=0,isCycle[i]=0,parent[i]=-1;
    }

    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void dfs(int s,int p)
    {
        if(vis[s] || cf)
            return;

        vis[s]=1;
        parent[s]=p;

        for(int i : adj[s])
        {
            if(vis[i] && !cf)
            {
                if(i==parent[s])
                    continue;

                else
                {
                    //cycle found
                    //start from s, keep backtracking till we reach i again
                    int c=s;
                    bu=c;bv=i;isCycle[i]=1;

                    while(c!=i && parent[c]!=-1)
                    {
                        isCycle[c]=1;
                        c=parent[c];
                    }

                    cf=true;
                    return;
                }
            }

            else if(!vis[i] || !cf)
                dfs(i,s);
        }
    }

    void dfs2(int s,int p)
    {
        if(vis[s])
            return;

        vis[s]=1;
        if(isCycle[s])
            dist[s]=0;

        else
            dist[s]=dist[p]+1;

        for(int i : adj[s])
        {
            dfs2(i,s);
        }
    }

    void printAnswer()
    {
        dfs(1,-1);

        for(int i=0;i<=n;i++)
            vis[i]=0;

        dfs2(bv,parent[bv]);

        for(int i=1;i<=n;i++)
            printf("%d ",dist[i]);
    }

};

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int u,v;

    scanf("%d",&n);
    Graph g(n);

    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&u,&v);
        g.addEdge(u,v);
    }

    g.printAnswer();

    return 0;
}
