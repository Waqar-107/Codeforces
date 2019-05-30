/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int a, b, x, y;

    sf(n);
    sff(a, x);
    sff(b, y);

    a--, b--, x--, y--;
    while(1)
    {
        if(a == b)
        {
            pfs("YES\n");
            return 0;
        }

        if(a == x || b == y)
            break;


        a = (a + 1) % n;
        b = (b - 1 + n) % n;
    }

    pfs("NO\n");

    return 0;
}
