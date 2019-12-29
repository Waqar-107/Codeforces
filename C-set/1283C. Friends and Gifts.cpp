/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

vector<int> adj[N];
int ans[N], in[N];
bool vis[N];
vector<pp> com;
int lst;

void dfs(int s)
{
    vis[s] = true;
    lst = s;

    for(int i : adj[s])
    {
       if(!vis[i])
            dfs(i);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    memset(in, 0, sizeof(in));

    sf(n);
    for(i = 1; i <= n; i++)
    {
        sf(ans[i]);

        in[ans[i]]++;

        if(ans[i])
            adj[i].pb(ans[i]);
    }

    memset(vis, 0, sizeof(vis));
    for(i = 1; i <= n; i++)
    {
        if(!vis[i] && !in[i])
        {
            lst = -1;
            dfs(i);

            //cout<<i<<" "<<lst;nl;
            if(ans[lst] != i) com.pb({i, lst});
        }
    }

    for(i = 0; i < com.size(); i++)
    {
        if(i + 1 < com.size())
            ans[com[i].second] = com[i + 1].first;
    }

    if(com.size() >= 2)
        ans[com.back().second] = com[0].first;

    for(i = 1; i <= n; i++)
        pf(ans[i]), pfs(" ");

    return 0;
}
