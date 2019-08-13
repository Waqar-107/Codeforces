/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
#define inf 1e18
#define mod 998244353

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
    int n, m, q;

    sf(q);
    while(q--)
    {
        sf(n);
        int a[n * 4];

        for(i = 0; i < 4 * n; i++)
            sf(a[i]);

        sort(a, a + 4 * n);

        bool f = true;
        int area;
        i = 0, j = 4 * n - 1;

        if(a[i] == a[i + 1] && a[j] == a[j - 1])
            area = a[i] * a[j];
        else
            f = false;

        if(!f){pfs("NO\n"); continue;}

        i += 2, j -= 2;
        while(i < j)
        {
            if(a[i] == a[i + 1] && a[j] == a[j - 1])
            {
                if(a[i] * a[j] != area){
                    f = false;
                    break;
                }
            }

            else
            {
                f = false;
                break;
            }

            i += 2;
            j -= 2;
        }

        if(f)
            pfs("YES\n");
        else
            pfs("NO\n");
    }

    return 0;
}
