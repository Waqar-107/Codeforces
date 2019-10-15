/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
#define inf 1e18

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

    sf(n);

    int a[n], sum = 0, cnt = 0;
    for(i = 0; i < n; i++)
        sf(a[i]), sum += a[i];

    cnt = a[0];
    vector<int> vec;
    vec.pb(1);

    for(i = 1; i < n; i++)
    {
        if(a[i] * 2 <= a[0])
            cnt += a[i], vec.pb(i + 1);
    }

    if(sum / 2 + 1 <= cnt)
    {
        pf(vec.size()); nl;
        for(int e : vec)
            pf(e), pfs(" ");
    }

    else
        pf(0);

    return 0;
}
