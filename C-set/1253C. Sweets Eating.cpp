/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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
    int n, m, q;

    sff(n, m);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    sort(a, a + n);

    int sz = 1;
    ll coef = 1, ans = 0, sum[n];
    memset(sum, 0, sizeof(sum));

    for (i = n - 1; i >= 0; i--)
    {
        ans += (coef * a[i]);

        if (sz % m == 0)
            coef++;

        sz++;
    }

    for (i = 0; i < m; i++)
    {
        for (j = n - i - 1; j >= 0; j -= m)
            sum[i] += a[j];
    }

    vector<ll> vec;
    int turn = 0;
    for (i = n - 1; i >= 0; i--)
    {
        vec.push_back(ans);

        ans -= sum[turn];
        sum[turn] -= a[i];

        if (turn == m - 1)
            turn = 0;
        else
            turn++;
    }

    for (int i = n - 1; i >= 0; i--)
        cout << vec[i] << " ";

    return 0;
}

