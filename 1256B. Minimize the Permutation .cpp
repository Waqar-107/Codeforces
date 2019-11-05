    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 150
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
    #define pp pair<int, int>
     
    using namespace std;
     
    int a[N], done[N], pos[N];
    int main()
    {
        //freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m, t;
     
        sf(t);
        while(t--)
        {
            sf(n);
     
            for(i = 1; i <= n; i++)
                sf(a[i]), pos[a[i]] = i;
     
            memset(done, 0, sizeof(done));
            for(i = 1; i <= n; i++)
            {
                for(j = pos[i] - 1; j > 0; j--)
                {
                    if(j > n - 1) break;
                    if(done[j]) break;
                    if(a[j] < a[j + 1]) break;
     
                    swap(a[j], a[j + 1]);
                    done[j] = 1;
                }
            }
     
            for(i = 1; i <= n; i++)
                pf(a[i]), pfs(" ");
            nl;
        }
     
     
        return 0;
    }
