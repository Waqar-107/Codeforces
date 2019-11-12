/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 150
#define inf 10000

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

#define white 0
#define grey 1
#define black 2

using namespace std;

int color[N];
bool inDeg[N];
vector<int> adj[N];
vector<int> cycle;

void dfs(int s, int p, int v)
{
    //cout<<"visited "<<s<<" from "<<p<<", val: "<<v;nl;
    color[s] = grey;
    for(int e : adj[s])
    {
        if(color[e] == black)
            continue;

        else if(color[e] == white)
            dfs(e, s, v + 1);

        else
        {
            if(v % 2) cycle.pb(v);
            else cycle.pb(v / 2);
        }
    }

    color[s] = black;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    memset(inDeg, 0, sizeof(inDeg));

    sf(n);
    for(i = 1; i <= n; i++)
    {
        sf(m);
        adj[i].pb(m);

        inDeg[m] = true;
    }

    for(i = 1; i <= n; i++)
    {
        if(!inDeg[i])
        {
            pf(-1);
            return 0;
        }
    }

    memset(color, 0, sizeof(color));

    for(i = 1; i <= n; i++)
    {
        if(color[i] == white)
            dfs(i, -1, 1);
    }

    int ans = cycle[0];
    for(i = 1; i < cycle.size(); i++)
    {
        k = __gcd(ans, cycle[i]);
        ans = (ans * cycle[i]) / k;
    }

    pf(ans);

    return 0;
}
