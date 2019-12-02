/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 550
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
    int n, m, v;

    sff(n, v);

    double a[n], b[n], sum = 0;
    for(i = 0; i < n; i++)
        cin >> a[i], sum += a[i];

    for(i = 0; i < n; i++)
        cin >> b[i], b[i] /= a[i];

    double t = b[0];
    for(i = 1; i < n; i++)
        t = min(t, b[i]);

    cout << setprecision(10) << min(v * 1.0, sum * t);

    return 0;
}
