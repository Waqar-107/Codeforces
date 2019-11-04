/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 10000100
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
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int a, b;

    sff(a, b);
    if(a > b) swap(a, b);

    m = b - a;
    vector<int> vec;

    int sq = sqrt(m);

    int ans = -1;
    ll mn = 1e18;

    for(i = 1; i <= sq; i++)
    {
        if(m % i == 0)
        {
            vec.pb(i);
            if(m / i != i)
                vec.pb(m / i);
        }
    }

    ll x, y, z, tmp;
    x = a, y = b;
    if((x * y) % __gcd(x, y) == 0)
        mn = (x * y) / __gcd(x, y), ans = 0;

    for(int e : vec)
    {
        z = e - (a % e);
        x = a + z;
        y = b + z;

        if((x * y) % __gcd(x, y) == 0)
        {
            tmp = (x * y) / __gcd(x, y);
            //cout<<e<<" "<<z<<" "<<x<<" "<<y;nl;
            if(tmp < mn)
                mn = tmp, ans = z;
        }
    }

    pf(ans);

    return 0;
}
