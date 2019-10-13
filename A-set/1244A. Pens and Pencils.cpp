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
        int n, m;
        int a, b, c, d, q;
     
        sf(q);
        while(q--)
        {
            sff(a, b);
            sff(c, d);
            sf(k);
     
            int x = a / c;
            if(a % c != 0)
                x++;
     
            int y = b / d;
            if(b % d != 0)
                y++;
     
            if(x + y <= k)
            {
                x += (k - x - y);
                pff(x, y);
            }
            else
                pf(-1);
            nl;
        }
     
        return 0;
    }
