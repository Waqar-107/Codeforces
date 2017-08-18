/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int d=0;
map<string,vector<string>> adj;
map<string,bool> vis;

int dfs(string s)
{
    if(vis[s])
        return 0;

    int dist=0;
    vis[s]=1;

    for(int i=0;i<adj[s].size();i++)
    {
        dist=max(dfs(adj[s][i]),dist);
    }

    return dist+1;
}

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    string s1,s2,r;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s1>>r>>s2;

        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

        adj[s2].push_back(s1);
        adj[s1].push_back(s2);
    }

    cout<<dfs("polycarp");

    return 0;
}
