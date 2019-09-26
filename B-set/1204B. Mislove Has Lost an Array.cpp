/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 100000007

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
    int l, r;

    sf(n);
    sff(l, r);

    vector<int> vec;
    int p = 1;
    for(i = 0; i < r; i++)
        vec.pb(p), p *= 2;

    ll mx = 0, mn = 0;

    // min
    m = n;
    for(i = 0; i < l; i++)
        mn += vec[i], m--;

    mn += m;

    // max
    m = n;
    for(i = 0; i < r; i++)
        mx += vec[i], m--;

    mx += (m * vec.back());

    pffl(mn, mx);

    return 0;
}
