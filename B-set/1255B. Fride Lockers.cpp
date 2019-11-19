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

int a[N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    int u, v;
    bool flag;
    ll ans;

    sf(q);
    while(q--)
    {
        sff(n, m);

        for(i = 1; i <= n; i++)
            sf(a[i]);

        if(n == 2 || n != m){
            pfs("-1\n");
            continue;
        }

        ll ans = 0;
        vector<pp> vec;
        for(i = 1; i < n; i++)
            ans += a[i] + a[i + 1], vec.pb({i, i +1});

        ans += a[1] + a[n];
        vec.pb({1, n});

        pfl(ans), nl;
        for(pp e : vec)
            pff(e.first, e.second), nl;
    }

    return 0;
}

