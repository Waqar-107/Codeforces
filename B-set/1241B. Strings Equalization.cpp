    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 1010101
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
        //freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m, q;
        string s, t;
     
        sf(q);
        while(q--)
        {
            cin >> s >> t;
     
            bool f = false;
     
            n = s.length();
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < n; j++)
                {
                    if(s[i] == t[j])
                    {
                        f = true;
                        break;
                    }
                }
     
                if(f)break;
            }
     
            if(f)
                pfs("YES");
            else
                pfs("NO");
     
            nl;
        }
     
        return 0;
    }
