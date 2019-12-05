/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 10
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);

    vector<int> vec[n];
    vector<int> adj[110];
    int tab[n][110];
    memset(tab, 0, sizeof(tab));


    for(i = 0; i < n; i++)
    {
        sf(m);
        for(j = 0; j < m; j++)
        {
            sf(k);
            vec[i].pb(k), adj[k].pb(i);
            tab[i][k] = 1;
        }
    }

    for(i = 0; i < n; i++)
    {
        for(int e : vec[i])
        {
            for(int f : adj[e])
                tab[f][e] = 0;
        }

        int cnt = 0;
        for(int x = 0; x < n; x++)
        {
            k = 0;
            for(j = 0; j <= 100; j++)
                k += tab[x][j];

            if(!k) cnt++;
        }

        if(cnt == 1) pfs("YES\n");
        else pfs("NO\n");

        for(int e : vec[i])
        {
            for(int f : adj[e])
                tab[f][e] = 1;
        }
    }

    return 0;
}
