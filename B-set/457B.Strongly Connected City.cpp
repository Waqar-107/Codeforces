/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 500
#define mod 1000000007

using namespace std;

bool vis[N];
stack<int> ss;
vector<int> adj[N];
vector<int> adj2[N];

void dfs(int s)
{
    vis[s]=1;

    for(int i : adj[s])
    {
        if(!vis[i])
            dfs(i);
    }

    ss.push(s);
}

void dfs2(int s)
{
    vis[s]=1;

    for(int i : adj2[s])
    {
        if(!vis[i])
            dfs2(i);
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int st,fin;
    string s,t;

    cin>>n>>m;
    cin>>s;
    cin>>t;

    //add edges
    //sideways
    st=1;
    for(i=0;i<n;i++)
    {
        fin=st+m-1;
        if(s[i]=='>')
        {
            for(j=st;j<fin;j++)
            {
                adj[j].push_back(j+1);
                adj2[j+1].push_back(j);
            }
        }

        else
        {
            for(j=fin;j>st;j--)
            {
                adj[j].push_back(j-1);
                adj2[j-1].push_back(j);
            }
        }

        st+=(m);
    }

    //up-down
    st=1;
    for(i=0;i<m;i++)
    {
        fin=(n-1)*m+st;

        if(t[i]=='v')
        {
            for(j=st;j<fin;j+=m)
            {
                adj[j].push_back(j+m);
                adj2[j+m].push_back(j);
            }
        }

        else
        {
            for(j=fin;j>st;j-=m)
            {
                adj[j].push_back(j-m);
                adj2[j-m].push_back(j);
            }
        }

        st++;
    }

    memset(vis,0,sizeof(vis));
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
            dfs(i);
    }

    memset(vis,0,sizeof(vis));

    int count=0;
    while(!ss.empty())
    {
        if(!vis[ss.top()])
        {
            dfs2(ss.top());
            count++;
        }

        ss.pop();
    }

    if(count==1)
        cout<<"YES";

    else
        cout<<"NO";

    return 0;
}
