/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 510
#define inf 1e18
#define mod 100000007

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

char adj[N][N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, x;

    sff(n, m);

    int cnt = 0;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <=m; j++)
        {
            cin>> adj[i][j];

            if(adj[i][j] == '*')
                cnt++;
        }
    }

     for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
           // consider it as the center
            if(adj[i][j] == '*')
            {
                x = 1;
                int l, r, u, b;
                l = r = u = b = 0;

                // left
                for(k = j - 1; k > 0; k--)
                {
                    if(adj[i][k] == '.')break;
                    x++; l++;
                }

                // right
                for(k = j + 1; k <= m; k++)
                {
                    if(adj[i][k] == '.')break;
                    x++; r++;
                }

                // top
                for(k = i - 1; k > 0; k--)
                {
                    if(adj[k][j] == '.')break;
                    x++; u++;
                }

                // bottom
                for(k = i + 1; k <= n; k++)
                {
                    if(adj[k][j] == '.')break;
                    x++; b++;
                }

                //cout<<l<<" "<<r<<" "<<u<<" "<<b;nl;
                //cout<<x<<" "<<cnt<<" "<<i<<" "<<j;nl; nl;
                if(x == cnt && l && r && u && b)
                {
                    pfs("YES");
                    return 0;
                }
            }
        }
    }

    pfs("NO");

    return 0;
}
