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
        sff(n, m);

        int a[n];
        for(i = 0; i < n; i++)
            sf(a[i]);

        sort(a, a + n);

        for(i = 2; i < n; i++)
            a[i] = min(a[i], a[0] + a[1]);

        bool flag = true;
        for(i = 0; i < n; i++)
        {
            if(a[i] > m)
            {
                flag = false;
                break;
            }
        }

        flag ? pfs("YES\n") : pfs("NO\n");
    }

    return 0;
}

/***https://github.com/Waqar-107/Codeforces***/
