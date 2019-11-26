/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 40101
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>
#define mod 1000000007

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(n);

    if(n % 2 == 0)
    {
        pfs("-1");
        return 0;
    }

    int a[n], b[n], c[n];

    for(i = 0; i < n; i++)
        a[i] = i;

    for(i = 0; i < n; i++)
        b[i] = (i + 1) % n;

    for(i = 0; i < n; i++)
        c[i] = (a[i] + b[i]) % n;

    for(i = 0; i < n; i++)
        pf(a[i]), pfs(" ");

    nl;
    for(i = 0; i < n; i++)
        pf(b[i]), pfs(" ");

    nl;
    for(i = 0; i < n; i++)
        pf(c[i]), pfs(" ");

    return 0;
}
