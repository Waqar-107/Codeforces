    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 110
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
     
    int main()
    {
        //freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m, t;
     
        sf(t);
        while(t--)
        {
            sf(n);
     
            int a[n];
            for(i = 0; i < n; i++)
                sf(a[i]);
     
            sort(a, a + n);
            vector<int> vec, vec2;
            for(i = 0; i < n; i += 2)
                vec.pb(a[i]);
     
            for(i = 1; i < n; i += 2)
                vec2.pb(a[i]);
     
            int cnt = 0, cnt2 = 0;
            for(int e : vec2)
            {
                cnt = 0;
                for(i = 0; i < vec.size(); i++)
                {
                    if(abs(e - vec[i]) > 1)
                        cnt++;
                }
     
                if(cnt == vec.size())
                    cnt2++;
            }
     
            if(cnt2 == vec2.size())
                pf(1);
            else
                pf(2);
            nl;
        }
     
     
        return 0;
    }
