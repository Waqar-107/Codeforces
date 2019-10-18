/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
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
#define pp pair<ll, ll>

using namespace std;

ll mod = 1e9 + 7;
ll solve(ll x)
{
    if(x == 0) return 0;

    ll p = 1, sum = 1;
    bool state = true;
    ll odd = 0, even = 0;

    while(true)
    {
        if(sum > x)
        {
            sum = p - (sum - x);

            if(state)
                odd += sum;
            else
                even += sum;

            break;
        }

        else
        {
            if(state)
                odd += p;
            else
                even += p;
        }

        p *= 2;
        sum += p;
        state = !state;
    }

    // cout << even <<" "<< odd;nl;

    ll uno = ((odd % mod) * (odd % mod)) % mod;
    ll dos = ((even % mod) * ((even + 1) % mod)) % mod;
    ll ret = (uno % mod + dos % mod) % mod;

    return ret;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    ll n, m;

    cin >> n >> m;

    ll ret1 = solve(n - 1);
    ll ret2 = solve(m);

    cout << (ret2 % mod - ret1 % mod + mod) % mod << endl;

    return 0;
}
