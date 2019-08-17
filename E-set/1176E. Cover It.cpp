/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
#define inf 1e18

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

vector<vector<int>> adj;
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    int u, v;

    sf(q);
    while(q--)
    {
        sff(n, m);

        adj = vector<vector<int>>(n + 1);

        int vis[n + 1], color[n + 1];
        memset(vis, 0, sizeof(vis));

        for(i = 0; i < m; i++)
        {
            sff(u, v);

            adj[u].pb(v);
            adj[v].pb(u);
        }

        queue<int> q;

        vis[1] = 1;
        q.push(1);
        color[1] = 0;

        while(!q.empty())
        {
            u = q.front();
            q.pop();

            for(int e : adj[u])
            {
                if(!vis[e])
                    color[e] = !color[u], vis[e] = 1, q.push(e);
            }
        }

        vector<int> even, odd;
        for(i = 1; i <= n; i++)
        {
            if(color[i] == 0)
                even.pb(i);
            else
                odd.pb(i);
        }

        if(even.size() < odd.size())
        {
            pf(even.size()); nl;
            for(int e : even)
                pf(e), pfs(" ");

            nl;
        }

        else
        {
            pf(odd.size()); nl;
            for(int e : odd)
                pf(e), pfs(" ");

            nl;
        }
    }

    return 0;
}
