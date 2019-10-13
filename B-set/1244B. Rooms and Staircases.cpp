    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 101010
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
     
    int main()
    {
        // freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m, q;
     
        sf(q);
        string s;
     
        while(q--)
        {
            sf(n);
            cin >> s;
     
            int ans = n;
     
            int l = -1, r = -1;
            for(i = n - 1; i >= 0; i--)
            {
                if(s[i] == '1')
                {
                    r = i + 1;
                    break;
                }
            }
     
            for(i = 0; i < n; i++)
            {
                if(s[i] == '1')
                {
                    l = i + 1;
                    break;
                }
            }
     
            if(l != -1)
            {
                //if starts in the rightmost cell
                k = (n - l + 1) + max(l, n - l + 1);
                ans = max(ans, k);
   
                // if starts in the leftmost cell
                k = (n - r + 1) + max(r, n - r + 1);
                ans = max(ans, k);
            }
     
            pf(ans); nl;
        }
     
        return 0;
    }
