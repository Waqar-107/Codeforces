/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
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
    int n, m, t, sq;
    bool f;

    sf(t);
    set<ll> s;

    while(t--)
    {
        sf(n);

        ll a[n];
        for(i = 0; i < n; i++)
            sfl(a[i]);

        sort(a, a + n);

        s.clear();
        ll mm = a[0] * a[n - 1];

        for(ll x = 2; x * x <= mm; x++)
        {
            if(mm % x == 0)
                s.insert(x), s.insert(mm / x);
        }

        f = true;
        if(s.size() == n)
        {
            for(i = 0; i < n; i++)
            {
                if(s.find(a[i]) != s.end())continue;
                f = false;
                break;
            }
        }

        else
            f = false;

        if(f)
            cout << mm <<endl;
        else
            cout<< -1 << endl;
    }

    return 0;
}
