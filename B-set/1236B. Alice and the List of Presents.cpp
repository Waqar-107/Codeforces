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
    ll fast_expo(ll x, ll y)
    {
        ll res = 1;
     
        x = x % mod;
     
        while (y > 0)
        {
            if (y & 1)
                res = (res * x) % mod;
     
            y = y >> 1;
            x = (x * x) % mod;
        }
     
        return (res + mod) % mod;
    }
     
    int main()
    {
        // freopen("in.txt", "r", stdin);
     
        int i, j, k;
        ll n, m;
     
        sffl(n, m);
     
        ll temp = fast_expo(2, m) - 1;
        cout << (fast_expo(temp, n)) % mod << endl;
     
        return 0;
    }
