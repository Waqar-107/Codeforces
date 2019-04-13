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
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int s, d, x;

    int mn = 1e9, ans = 0;

    sff(n, t);
    for(i = 0; i < n; i++)
    {
        sff(s, d);

        if(t <= s)
        {
            if(mn > s)
                mn = s, ans = i + 1;
        }

        else
        {
            x = t - s;
            if(x % d == 0)
                x /= d;
            else
                x = (x / d) + 1;

            m = s + x * d;
            if(mn > m)
                mn = m, ans = i + 1;
        }
    }

    pf(ans);

    return 0;
}
