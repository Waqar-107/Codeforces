    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 35
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
        int n, m, q;
        int b, p, f;
        int h, c;
     
        sf(q);
        while(q--)
        {
            sff(b, p); sf(f);
            sff(h, c);
     
            int ans = 0;
     
            m = b / 2;
     
            while(p + f > 0 && m > 0)
            {
                if(p > 0 && f > 0)
                {
                    if(h > c)
                        p--, ans += h, m--;
     
                    else
                        f--, ans += c, m--;
                }
     
                else if(p > 0)
                    p--, ans += h, m--;
     
                else if(f > 0)
                    f--, ans += c, m--;
            }
     
            pf(ans); nl;
        }
     
        return 0;
    }
