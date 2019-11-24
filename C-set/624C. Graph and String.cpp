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
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>
#define mod 1000000007

using namespace std;

int n;
char ans[N];
int adj[N][N];

void dfs(int s, char ch)
{
    if(ans[s] != '-') return;

    ans[s] = ch;
    for(int i = 1; i <= n; i++)
    {
        if(adj[s][i] && ans[i] == '-')
            dfs(i, ch);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int u, v, m;

    memset(adj, 0, sizeof(adj));

    sff(n, m);
    for(i = 0; i < m; i++)
    {
        sff(u, v);

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    fill(ans, ans + N, '-');
    for(i = 1; i <= n; i++)
    {
        k = 0;
        for(j = 1; j <= n; j++)
        {
            if(adj[i][j])
                k++;
        }

        // a vertex must be connected to all the other nodes to assign B in it
        if(k == n - 1)
            ans[i] = 'b';
    }

    for(i = 1; i <= n; i++)
    {
        if(ans[i] == '-')
        {
            dfs(i, 'a');
            break;
        }
    }

    for(i = 1; i <= n; i++)
    {
        if(ans[i] == '-')
        {
            dfs(i, 'c');
            break;
        }
    }

    for(i = 1; i <= n; i++)
    {
        if(ans[i] == 'a')
        {
            for(j = 1; j <= n; j++)
            {
                if(i == j) continue;
                if((ans[j] == 'a' || ans[j] == 'b') && !adj[i][j]){
                    pfs("No");
                    return 0;
                }
            }
        }

        else if(ans[i] == 'c')
        {
            for(j = 1; j <= n; j++)
            {
                if(i == j) continue;
                if((ans[j] == 'c' || ans[j] == 'b') && !adj[i][j]){
                    pfs("No");
                    return 0;
                }
            }
        }

        else
         {
            for(j = 1; j <= n; j++)
            {
                if(i == j) continue;
                if(!adj[i][j]){
                    pfs("No");
                    return 0;
                }
            }
        }
    }

    pfs("Yes\n");
    for(i = 1; i <= n; i++)
        cout << ans[i];

    return 0;
}
