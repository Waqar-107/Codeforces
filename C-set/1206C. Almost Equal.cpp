    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 201010
    #define inf 1e18
    #define mod 100000007
     
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
     
        sf(n);
     
        if(n % 2 == 0)
        {
            pfs("NO\n");
            return 0;
        }
     
        int ans[2 * n];
     
        i = 0, j = n;
        m = 0;
        for(k = 1; k < 2 * n; k += 2)
        {
            // small-large
            if(!m)
                ans[i] = k, ans[j] = k + 1;
            else
                ans[i] = k + 1, ans[j] = k;
     
            m = !m;
            i++, j++;
        }
     
        pfs("YES\n");
        for(i = 0; i < 2 * n; i++)
            pf(ans[i]), pfs(" ");
     
        return 0;
    }
