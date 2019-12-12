/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
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
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(t);
    while(t--)
    {
        ll a, b, c;
        ll a2, b2, c2, temp;
        ll ans = -1;

        sffl(a, b), sfl(c);

        int d[] = {1, 0, -1};
        for(i = 0; i < 3; i++)
        {
            a2 = a + d[i];
            for(j = 0; j < 3; j++)
            {
                b2 = b + d[j];
                for(k = 0; k < 3; k++)
                {
                    c2 = c + d[k];
                    temp = abs(a2 - b2) + abs(a2 - c2) + abs(b2 - c2);
                    if(ans == -1 || temp < ans)
                        ans = temp;
                }
            }
        }

        pfl(ans), nl;
    }

    return 0;
}
