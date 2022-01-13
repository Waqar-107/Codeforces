/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 10101
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
    int n, m, t;

    sf(t);
    while(t--)
    {
        int a, b, c;
        sff(a, b), sf(c);

        int new_a = b - (c - b);
        if(new_a >= a && new_a % a == 0)
        {
            pfs("YES\n");
            continue;
        }

        int new_b = a + (c - a) / 2;
        if(new_b >= b && (c - a) % 2 == 0 && new_b % b == 0)
        {
            pfs("YES\n");
            continue;
        }

        int new_c = b +  (b - a);
        if(new_c >= c && new_c % c == 0)
        {
            pfs("YES\n");
            continue;
        }

        pfs("NO\n");
    }

    return 0;
}

/***https://github.com/Waqar-107/Codeforces***/
