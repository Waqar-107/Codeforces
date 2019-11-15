/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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

using namespace std;

int dp[N][17], parent[N], level2[N];
int subTreeSz[N], newNum[N];
vector<int> level[N];
vector<int> adj[N];
vector<int> roots;

int pos;
int dfs(int s, int lvl)
{
    int cnt = 1;

    newNum[s] = pos++;
    level[lvl].pb(newNum[s]);
    level2[s] = lvl;

    for(int e : adj[s])
    {
        if(e != parent[s])
            cnt += dfs(e, lvl + 1);
    }

    subTreeSz[s] = cnt;
    return cnt;
}

void preCalc(int n)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 17; j++)
            dp[i][j] = -1;
    }

    // at 2 ^ 0 = 1 we store the actual parent
    for(int i = 1; i <= n; i++)
        dp[i][0] = parent[i];

    for(int h = 1; h < 17; h++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(dp[i][h - 1] != -1)
                dp[i][h] = dp[dp[i][h - 1]][h - 1];
        }
    }
}

int get_Kth_Ancestor(int node, int k)
{
    int ans = node;
    for(int i = 0; i < 17; i++)
    {
        // if 1 then we jump to ith parent of the node
        if(k & (1 << i))
            ans = dp[ans][i];

        if(ans == -1)
            break;
    }

    return ans;
}

void solve(int p, int v)
{
    int k = get_Kth_Ancestor(v, p);

    if(k <= 0){
        pfs("0 ");
        return;
    }

    int sz = subTreeSz[k];
    int lvl = level2[v];

    int l = newNum[k];
    int r = l + sz - 1;

    // now find l-r in level[lvl]
    int x = lower_bound(level[lvl].begin(), level[lvl].end(), l) - level[lvl].begin();
    int y = lower_bound(level[lvl].begin(), level[lvl].end(), r) - level[lvl].begin();

    // the largest node value is r, so no lower bound
    if(y == level[lvl].size())
        y--;
    else if(level[lvl][y] > r) y--;
/*cout<<"level of v: "<<lvl<<endl;
cout<<"l-r : "<<l<<" "<<r<<endl;
for(int e : level[lvl])
    pf(e), pfs(" ");
nl;
    cout<<"idx: "<<x<<" "<<y<<endl;*/
    cout << (y - x) << " ";
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int u, v, p;

    sf(n);
    for(i = 1; i <= n; i++)
    {
        sf(parent[i]);

        if(parent[i])
            adj[parent[i]].pb(i);
        else
            roots.pb(i);
    }

    pos = 1;
    memset(subTreeSz, 0, sizeof(subTreeSz));
    for(int e : roots)
        dfs(e, 0);

    preCalc(n);

    sf(t);
    while(t--)
    {
        sff(v, p);
        solve(p, v);
    }

    return 0;
}

