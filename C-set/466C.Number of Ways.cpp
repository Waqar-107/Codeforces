/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 4
#define inf 1e6

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
    int x, y;

    ll sum = 0, tmp;

    sf(n);

    int a[n + 1];
    for(i = 1; i <= n; i++)
        sf(a[i]), sum += a[i];

    if(sum % 3 != 0 || n < 3)
    {
        pf(0);
        return 0;
    }

    ll ans = 0;

    bool capable[n + 1];
    memset(capable, 0, sizeof(capable));

    tmp = 0;
    for(i = 1; i < n; i++)
    {
        tmp += a[i];

        //check if we can put the 2nd partition after this element
        if(i > 1 && tmp == (sum / 3) * 2)
            capable[i] = true;
    }

    ll s[n + 1];
    memset(s, 0, sizeof(s));

    for(i = n - 1; i > 0; i--)
    {
        s[i] += s[i + 1];
        //finding out how many points are there to put the 2nd partition
        if(capable[i])
            s[i - 1]++;
    }

    tmp = 0;
    for(i = 1; i < n; i++)
    {
        tmp += a[i];

        if(tmp == sum / 3)
            ans += s[i];
    }

    pfl(ans);

    return 0;
}
