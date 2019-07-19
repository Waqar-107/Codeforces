    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 200100
    #define inf 1e18
    #define mod 998244353
     
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
     
    vector<int> vec[15];
    int main()
    {
        //freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m, l = 0;
     
        sf(n);
     
        for(i = 0; i < n; i++)
        {
            sf(m);
     
            j = 0;
            while(m)
            {
                vec[j].pb(m % 10);
                j++;
                m /= 10;
            }
     
            l = max(l, j);
        }
     
        ull ans = 0, mult = 1, sum;
        for(i = 0; i < l; i++)
        {
            sum = 0;
            for(int e : vec[i])
                sum += e;
     
            ans = ((ans % mod) + (mult % mod * sum % mod * n % mod) % mod) % mod;
            mult *= 10;
            ans = ((ans % mod) + (mult % mod * sum % mod * n % mod) % mod) % mod;
            mult *= 10;
        }
     
        cout << ans;
     
        return 0;
    }
