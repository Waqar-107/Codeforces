/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 300010
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

int col[N], B, R, ans, tr, tb;
pp sub[N];
vector<int> adj[N];

void dfs(int s,int p)
{
    sub[s] = {0, 0};

    if(col[s] == 1)
        sub[s].first++;
    else if(col[s] == 2)
        sub[s].second++;

    for(int e : adj[s])
    {
        if(e != p)
        {
            dfs(e, s);

            sub[s].first += sub[e].first;
            sub[s].second += sub[e].second;
        }
    }

    //cout<<"src: "<<s<<" red: "<<sub[s].first<<" blue: "<<sub[s].second;nl;

    for(int e : adj[s])
    {
        if(e != p)
        {
            //if we cut s-e edge then check if the tree rooted at e contains a single color
            if((!sub[e].first && !sub[e].second) || (!sub[e].first && sub[e].second) || (sub[e].first && !sub[e].second))
            {
                tr = R - sub[e].first;
                tb = B - sub[e].second;

                if((!tr && !tb) || (tr && !tb) || (!tr && tb))
                    ans++;
            }
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int u, v;

    sf(n);
    B = R = 0;

    for(i = 1; i <= n; i++)
    {
        sf(col[i]);

        if(col[i] == 1)
            R++;
        else if(col[i] == 2)
            B++;
    }

    for(i = 0; i < n - 1; i++)
    {
        sff(u, v);

        adj[u].pb(v);
        adj[v].pb(u);
    }

    ans = 0;
    dfs(1, -1);

    pf(ans);

    return 0;
}
