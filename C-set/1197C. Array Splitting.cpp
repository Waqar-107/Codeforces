/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
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
    int n, m;

    sff(n, k);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    vector<int> vec;
    for(i = 1; i < n; i++)
        vec.pb(a[i - 1] - a[i]);

    sort(vec.begin(), vec.end());

    int ans = a[n - 1] - a[0];
    for(i = 0; i < k - 1; i++)
        ans += vec[i];

    pf(ans);

    return 0;
}
