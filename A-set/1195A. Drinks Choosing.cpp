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
     
    int main()
    {
        //freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m;
     
        sff(n, k);
     
        map<int, int> mp;
        for(i = 0; i < n; i++)
        {
            sf(m);
            mp[m]++;
        }
     
        m = n / 2;
        if(n % 2)
            m++;
     
        auto itr = mp.begin();
        int even = 0, odd = 0;
     
        while(itr != mp.end())
        {
            even += (itr->second / 2) * 2;
            odd += itr->second % 2;
     
            itr++;
        }
     
        int ans = 0;
     
        //we have m sets
        if(even / 2 <= m)
            ans += even, m -= even / 2;
        else
            ans += m * 2, m = 0;
     
        if(m)
            ans += min(m, odd);
     
        pf(ans);
     
        return 0;
    }
