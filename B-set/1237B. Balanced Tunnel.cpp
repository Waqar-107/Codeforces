/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
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
    int n, m;

    sf(n);

    int a[n], b[n];
    int arr[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    for(i = 0; i < n; i++)
        sf(b[i]), arr[b[i]] = i + 1;

    int cnt = 0, done = 0;
    for(i = 0; i < n; i++)
    {
        k = arr[a[i]];
        m = k - done - 1;

        if(m < 0)
            continue;

        cnt += m;
        done = k;
    }

    pf(cnt);

    return 0;
}
