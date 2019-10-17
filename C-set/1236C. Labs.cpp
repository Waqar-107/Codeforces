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
     
    int main()
    {
        //freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m, t;
     
        sf(n);
        int a[n][n];
     
        k = 1;
        for(i = 0; i < n; i++)
        {
            if(i % 2)
            {
                for(j = n - 1; j >= 0; j--)
                    a[j][i] = k++;
            }
     
            else
            {
                for(j = 0; j < n; j++)
                    a[j][i] = k++;
            }
        }
     
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
                pf(a[i][j]), pfs(" ");
            nl;
        }
     
        return 0;
    }
