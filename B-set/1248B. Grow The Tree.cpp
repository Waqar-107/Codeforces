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

    deque<int> dq;

    sf(n);
    for(i = 1; i <= n; i++)
        sf(m), dq.pb(m);

    sort(dq.begin(), dq.end(), greater<int>());

    ll x = 0, y = 0;
    while(dq.size())
    {
        x += dq.front();
        dq.pop_front();

        if(dq.size())
            y += dq.back(), dq.pop_back();
    }

    ll ans = x * x + y * y;
    pfl(ans);

    return 0;
}

