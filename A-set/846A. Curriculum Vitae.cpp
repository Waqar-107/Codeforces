/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 40101
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
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);
    int a[n], pre[n];

    for(i = 0; i < n; i++)
        sf(a[i]);

    pre[0] = a[0];
    for(i = 1; i < n; i++)
        pre[i] = pre[i - 1] + a[i];

    // no zero taken
    int ans = pre[n - 1];

    int l, r;
    for(i = 0; i < n; i++)
    {
        // if this is the last zero
        if(!a[i])
        {
            // 1's in the right
            r = pre[n - 1] - pre[i];

            // 0's in the left
            l = i + 1 - pre[i];
            ans = max(ans, r + l );
        }
    }

    pf(ans);

    return 0;
}
