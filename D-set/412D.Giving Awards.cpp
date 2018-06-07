/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 30100
#define pp pair<int,int>

using namespace std;

int color[N];
vector<int> ans;
set<int> adj[N];

void dfs(int s)
{
    if(!color[s])
    {
        color[s]=1;

        for(int e : adj[s])
        {
            if(adj[e].find(s)!=adj[e].end())
            {
                cout<<"-1";
                exit(0);
            }

            dfs(e);
        }

        color[s]=2;
        ans.push_back(s);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int u,v;

    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;

        //u depends on v
        adj[u].insert(v);
    }

    memset(color,0,sizeof(color));
    for(i=1;i<=n;i++)
    {
        if(!color[i])
            dfs(i);
    }

    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";

    return 0;
}
