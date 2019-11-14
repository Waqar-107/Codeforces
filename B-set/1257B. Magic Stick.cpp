

    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 35
    #define inf 10000
     
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
     
    void yes(){
        pfs("YES\n");
    }
     
    void no(){
        pfs("NO\n");
    }
     
    int main()
    {
        // freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m, t;
        int x, y;
     
        sf(t);
        while(t--)
        {
            sff(x, y);
     
            if(x < y)
            {
               if(x == 1) no();
               else
               {
                   while(x < y && x != 3)
                   {
                       if(x % 2) x--;
                       x /= 2;
                       x *= 3;
                   }
     
                   if(x >= y) yes();
                   else no();
               }
            }
     
            else
                yes();
        }
     
        return 0;
    }
