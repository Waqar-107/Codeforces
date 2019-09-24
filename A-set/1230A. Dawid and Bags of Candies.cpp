    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 110
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
     
        int a[4];
        for(i = 0; i < 4; i++)
            sf(a[i]);
     
        for(i = 1; i <= 15; i++)
        {
            int x = 0, y = 0;
            for(j = 0; j < 4; j++)
            {
                if((1 << j) & i)
                    x += a[j];
                else
                    y += a[j];
            }
     
            if(x == y){
                pfs("YES");
                return 0;
            }
        }
     
        pfs("NO");
     
        return 0;
    }
