/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 5100
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

using namespace std;

bool vis[N];
vector<int> adj[N];

int dfs(int s)
{
    vis[s]=1;

    int cnt=1;
    for(int e : adj[s])
    {
        if(!vis[e])
            cnt+=dfs(e);
    }

    return cnt;
}

bool cmp(pp a, pp b)
{
    return a.second>b.second;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,s;
    int u,v;

    sff(n,m);
    sf(s);

    for(i=0;i<m;i++)
    {
        sff(u,v);
        adj[u].pb(v);
    }



    memset(vis,0,sizeof(vis));
    dfs(s);

    int cnt=0;
    vector<pp> vec;

    for(i=1;i<=n;i++)
    {
        memset(vis,0,sizeof(vis));
        if(!vis[i] && i!=s)
        {
            vec.pb({i,dfs(i)});
        }
    }

    //cout<<vec.size()<<endl;
    sort(vec.begin(),vec.end(),cmp);

    //for(i=0;i<vec.size();i++)
      //  cout<<vec[i].first<<" "<<vec[i].second<<endl;

    memset(vis,0,sizeof(vis));
    dfs(s);

    for(i=0;i<vec.size();i++)
    {
        if(!vis[vec[i].first])
            cnt++, dfs(vec[i].first);
    }

    pf(cnt);

    return 0;
}
