    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 101010
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
     
    string s;
    int alpha[4 * N][26];
    int ans[26];
     
    void build(int at, int L, int R)
    {
        if(L == R)
        {
            alpha[at][s[L - 1] - 'a']++;
            return;
        }
     
        int mid = (L + R) / 2;
     
        build(at * 2, L, mid);
        build(at * 2 + 1, mid + 1, R);
     
        for(int i = 0; i < 26; i++)
            alpha[at][i] = alpha[at * 2][i] + alpha[at *2 + 1][i];
    }
     
    void update(int at, int L, int R, int pos, char ch)
    {
        if(pos < L || pos > R)return;
        if(s[pos - 1] == ch)return;
     
        alpha[at][s[pos - 1] - 'a']--;
        alpha[at][ch - 'a']++;
     
        if(L == R)return;
       
        int mid = (L + R) / 2;
     
        update(at * 2, L, mid, pos, ch);
        update(at * 2 + 1, mid + 1, R, pos, ch);
    }
     
    // we are now in the range L-R in the tree
    // we are given l-r as the query in the input
    void query(int at, int L, int R, int l, int r)
    {
        // out of range
        if(r < L || R < l)return;
     
        // completely in range
        if(l <= L && R <= r)
        {
            
            for(int i = 0; i < 26; i++)
            {
                if(alpha[at][i] > 0)
                    ans[i] = 1;
            }
     
            return;
        }
     
        int mid = (L + R) / 2;
     
        query(at * 2, L, mid, l, r);
        query(at * 2 + 1, mid + 1, R, l, r);
    }
     
    int main()
    {
        // freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m, q;
        int l, r, pos;
        char ch;
     
        memset(alpha, 0, sizeof(alpha));
     
        cin >> s;
     
        n = s.length();
        build(1, 1, n);
     
        sf(q);
        while(q--)
        {
            sf(k);
     
            if(k == 1){
                sf(pos);
                cin >> ch;
     
                update(1, 1, n, pos, ch);
                s[pos - 1] = ch;
            }
     
            else{
                sff(l, r);
                memset(ans, 0, sizeof(ans));
                query(1, 1, n, l, r);
     
                k = 0;
                for(i = 0; i < 26; i++) {
                    if(ans[i])k++;
                }
  
                pf(k);nl;
            }
        }
     
        return 0;
    }
