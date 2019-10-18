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
#define pp pair<ll, ll>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, x, z;
    int a, b, c;

    sff(x, a);

    b = c = a;
    int cnt = 0;
    while(true)
    {
        if(a == x && b == x && c == x)
            break;

        cnt++;
        if(a <= b && a <= c && a != x)
        {
            z = b + c - 1 - a;
            a += min(z, x - a);
        }

        else if(b <= a && b <= c && b != x)
        {
            z = a + c - 1 - b;
            b += min(z, x - b);
        }

        else
        {
            z = b + a - 1 - c;
            c += min(z, x - c);
        }
    }

    pf(cnt);

    return 0;
}
