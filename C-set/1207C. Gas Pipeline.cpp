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
        ll a, b;
        string s;
     
        sf(q);
        while(q--)
        {
            sf(n);
            sffl(a, b);
            cin >> s;
     
            ll ans = 0, pipe = 0, pillar = 0;
            int arr[n + 1];
            for(i = 0; i <= n; i++)
                arr[i] = 1;
     
            j = 0, k = 1;
            for(i = 0; i < n; i++)
            {
                if(s[i] == '1')
                    arr[j] = 2, arr[k] = 2;
     
                j++;
                k++;
            }
     
            ll z = 2 * a + 3 * b;
            ll uno = a + 2 * b;
            ll dos = a + 4 * b;
     
            for(i = 0; i <= n; i++)
                pillar += arr[i];
     
            for(i = 0; i < n; i++)
            {
                if(arr[i] == arr[i + 1])
                    pipe++;
                else
                    pipe += 2;
            }
     
            // check if zigzag can be replaced
            vector<pp> vec;
            int cnt = 1;
     
            k = 0;
            for(i = 1; i < n; i++)
            {
                if(k + 48 == s[i])
                    cnt++;
                else
                    vec.pb({k, cnt}), cnt = 1, k = 1 - k;
            }
     
            if(cnt)
                vec.pb({k, cnt});
     
            // it is guaranteed that first and last element will be 0
            ll x, y;
            for(i = 1; i < vec.size() - 1; i++)
            {
                // 1+ 0+ 1+ pattern
                if(vec[i].first == 0 && vec[i].second > 1)
                {
                    //extra pillar
                    x = vec[i].second - 1;
     
                    // pipe reduce
                    y = 2;
     
                    if(2 * a - x * b > 0)
                        pipe -=2, pillar += x;
                }
            }
     
     
            ans = a * pipe + b * pillar;
            pfl(ans);
            nl;
        }
     
     
        return 0;
    }
