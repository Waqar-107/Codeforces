/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 10
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
    int n, m, t;
    double a, b, c, d;

    cin >> a >> b >> c >> d;

    /***
        probability of winning : p = a / b
        if the game is supposed to cont. then both of them must fail
        probability of both of them losing: q = (1 - a / b) * (1 - c / d)

        if smallR wins in the ith match then
        ans = p *  sum(q ^ (i - 1))
               = p / ( 1 - q )
    ***/

    double p = a / b;
    double q = (1 - a / b) * (1 - c / d);

    cout << setprecision(15) << p / (1 - q);

    return 0;
}
