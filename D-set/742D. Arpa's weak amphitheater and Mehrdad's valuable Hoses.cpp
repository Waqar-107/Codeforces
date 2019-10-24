/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
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

int mp[N];
pp item[N], sum[N];
int r[N], p[N];
vector<pp> grp[N];
int dp[N][N];

class DisjointSetUnion
{
    int n;
public:
    DisjointSetUnion(int n)
    {
        this->n = n;

        for (int i = 0; i <= n; i++)
            r[i] = 1, p[i] = i;
    }

    void Union(int a,int b)
    {
        int x = Find(a);
        int y = Find(b);

        if (r[x] > r[y])
        {
            p[y] = x;
            r[x] += r[y];
        }

        else
        {
            p[x] = y;
            r[y] += r[x];
        }
    }

    int Find(int x)
    {
        if (p[x] == x)
            return x;

        return p[x] = Find(p[x]);
    }
};

bool cmp(pp a, pp b)
{
    // beauty is same
    if(a.first == b.first)
        return a.second < b.second;

    return a.first > b.first;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, w;
    int u, v, r;

    sff(n, m), sf(w);
    for(i = 1; i <= n; i++)
        sf(item[i].second);

    for(i = 1; i <= n; i++)
        sf(item[i].first);

    DisjointSetUnion dsu(n);
    for(i = 0; i < m; i++)
    {
        sff(u, v);

        if(dsu.Find(u) != dsu.Find(v))
            dsu.Union(u, v);
    }

    k = 1;
    memset(mp, 0, sizeof(mp));
    for(i = 1; i <= n; i++)
    {
        r = dsu.Find(i);

        // make e new group;
        if(!mp[r])
        {
            mp[r] = k;
            grp[k].pb(item[i]);
            k++;
        }

        else
            grp[mp[r]].pb(item[i]);
    }

    for(i = 1; i < k; i++)
    {
        sort(grp[i].begin(), grp[i].end(), cmp);

        sum[i].first = sum[i].second = 0;
        for(pp e : grp[i])
        {
            sum[i].first += e.first;
            sum[i].second += e.second;
        }

        // cout << sum[i].first << " " << sum[i].second;nl;
    }

    // 0-1 knapsack
    int x, y, z;
    for(i = 1; i < k; i++)
    {
        for(j = 1; j <= w; j++)
        {
            // take the whole group i
            if(j < sum[i].second)
                x = dp[i - 1][j];
            else
                x = sum[i].first + dp[i - 1][j - sum[i].second];

            // take none from group i
            z = dp[i - 1][j];

            y = 0;
            for(pp e : grp[i])
            {
                if(j >= e.second)
                    y = max(y, e.first + dp[i - 1][j - e.second]);
            }

            dp[i][j] = max(x, max(y, z));
        }
    }

    pf(dp[k - 1][w]);

    return 0;
}
