/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100010
#define inf 1000000
#define pp pair<int,int>

using namespace std;

bool vis[N];
int parent[N];
vector<pp> adj[N];
stack<int> st;

void dfs(int s)
{
    vis[s]=1;
    
    for(pp e : adj[s])
    {
        if(!vis[e.first])
        {
            parent[e.first]=s;
            if(e.second==2)
                st.push(e.first);
            
            dfs(e.first);
        }
    }
}

void dfs2(int s)
{
    if(vis[s])
        return;
    
    vis[s]=1;
    //cout<<s<<" "<<parent[s]<<endl;
    
    if(parent[s]<1)
        return;
    
    dfs2(parent[s]);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int i,j,k;
    int n,m;
    int u,v,w;
    
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>u>>v>>w;
        
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    
    memset(vis,0, sizeof(vis));
    dfs(1);
    
    memset(vis,0, sizeof(vis));
    vis[1]=1;parent[1]=-1;
    
    vector<int> ans;
    while(!st.empty())
    {
        //cout<<st.top()<<endl;
        if(!vis[st.top()])
        {
            ans.push_back(st.top());
            dfs2(st.top());
        }
        
        st.pop();
    }
    
    cout<<ans.size()<<endl;
    for(int e : ans)
        cout<<e<<" ";
    
    return 0;
}
