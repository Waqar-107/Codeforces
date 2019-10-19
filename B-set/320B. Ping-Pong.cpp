/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 110
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

bool vis[N];
vector<pp> vec;

void dfs(int a)
{
    vis[a] = true;

    for(int i = 0; i < vec.size(); i++)
    {
        if(vis[i]) continue;

        if(vec[i].first < vec[a].first && vec[a].first < vec[i].second)
            dfs(i);

        else if(vec[i].first < vec[a].second && vec[a].second < vec[i].second)
            dfs(i);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int x ,y;

    sf(n);
    for(i = 1; i <= n; i++)
    {
        sf(t);
        sff(x, y);

        if(t == 1)
            vec.pb({x, y});

        else
        {
            x--, y--;
            memset(vis, 0, sizeof(vis));
            dfs(x);

            if(vis[y])
                pfs("YES\n");
            else
                pfs("NO\n");
        }
    }


    return 0;
}
