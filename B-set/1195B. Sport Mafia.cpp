    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 200100
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
     
    ll tester(ll n, ll x)
    {
        return ((n - x) * (n - x + 1)) / 2 - x;
    }
     
    int main()
    {
        //freopen("in.txt", "r", stdin);
     
        ll i, j, k;
        ll n, m;
     
        sffl(n, k);
     
        ll x = (2 * n + 3);
        ll y = sqrt(1.0 * (8 *n + 8 * k + 9));
     
        //ans = (x +- y) / 2;
     
        ll ans1 = (x + y) / 2;
        ll ans2 = (x - y) / 2;
     
        if(ans1 < ans2)
            swap(ans1, ans2);
     
        if(n - 1>= ans1 && tester(n, ans1) == k)
            pf(ans1);
        else
            pf(ans2);
     
        return 0;
    }
