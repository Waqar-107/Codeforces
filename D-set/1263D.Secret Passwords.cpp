/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 600
#define inf 100000000

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
#define pp pair<int,int>

using namespace std;

vector<int> adj[30];

class DisjointSetUnion
{
    int n;
    int *p, *r;
public:
    DisjointSetUnion(int n)
    {
        this->n = n;
        p = new int[n + 1];
        r = new int[n + 1];

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


int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    char mn;

    sf(n);
    string s[n + 1];

    DisjointSetUnion dsu(n);
    for(i = 1; i <= n; i++)
        cin >> s[i];

    for(i = 1; i <= n; i++)
    {
        m = s[i].length();
        for(j = 0; j < m; j++)
            adj[s[i][j] - 'a'].pb(i);
    }

    for(i = 0; i < 26; i++)
    {
        m = adj[i].size();
        for(j = 0; j < m - 1; j++)
        {
            dsu.Union(adj[i][j], adj[i][j + 1]);
        }
    }

    set<int> ss;
    for(i = 1; i <= n; i++)
        ss.insert(dsu.Find(i));

    pf(ss.size());

    return 0;
}
