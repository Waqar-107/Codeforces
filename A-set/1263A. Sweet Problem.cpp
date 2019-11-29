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

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(t);
    while(t--)
    {
        int a[3];
        for(i = 0; i < 3; i++)
            sf(a[i]);

        sort(a, a + 3, greater<int>());

        int ans = 0;
        m = min(a[0] - a[1], a[2]);

        if(a[0] != a[1])
            ans += m, a[0] -= m, a[2] -= m;

        if(a[2] % 2)
            ans += 2 * (a[2] / 2), a[0] -= (a[2] / 2), a[1] -= (a[2] / 2);
        else
            ans += (2 * (a[2] / 2)) + (a[2] % 2), a[0] -= (a[2] / 2) + (a[2] % 2), a[1] -= (a[2] / 2);

        ans += min(a[0], a[1]);
        pf(ans);
        nl;
    }

    return 0;
}
