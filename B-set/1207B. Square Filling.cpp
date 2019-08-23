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
     
        sff(n, m);
     
        int a[n][m], b[n][m];
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
                sf(a[i][j]);
        }
     
        memset(b, 0, sizeof(b));
     
        vector<pp> ans;
        for(i = 0; i < n - 1; i++)
        {
            for(j = 0; j < m - 1; j++)
            {
                //check boshano jabe kina
                if(a[i][j] == 1 && a[i][j + 1] == 1 && a[i + 1][j] == 1 && a[i + 1][j + 1] == 1)
                {
                    ans.pb({i + 1, j + 1});
     
                    b[i][j] = 1;
                    b[i][j + 1] = 1;
                    b[i + 1][j] = 1;
                    b[i + 1][j + 1] = 1;
                }
            }
        }
     
        k = 1;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(a[i][j] != b[i][j])
                {
                    k = 0;
                    break;
                }
            }
     
            if(!k)break;
        }
     
        if(!k)
            pf(-1);
        else
        {
            pf(ans.size());nl;
            for(pp e : ans)
                pff(e.first, e.second), nl;
        }
     
        return 0;
    }
