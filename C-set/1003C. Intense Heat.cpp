/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 5100
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

int a[N], sum[N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sff(n, k);
    for(i = 1; i <= n; i++)
        sf(a[i]);

    memset(sum, 0, sizeof(sum));

    for(i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + a[i];

    double mx = 0.0, temp;
    for(i = 1; i <= (n - k + 1); i++)
    {
        for(j = k + i - 1; j <= n; j++)
        {
            temp = (sum[j] - sum[i - 1]) * 1.0;
            temp /= (j - i + 1);
            mx = max(mx, temp);
        }
    }

    cout << setprecision(15) << mx;

    return 0;
}
