/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
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
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int u, d, l, r;
    string s;

    sf(t);
    while(t--)
    {
        cin >> s;

        n = s.length();
        u = d = l = r = 0;

        for(i = 0; i < n; i++)
        {
            if(s[i] == 'U')
                u++;
            else if(s[i] == 'D')
                d++;
            else if(s[i] == 'L')
                l++;
            else
                r++;
        }

        m = min(u, d);
        u = d = m;

        m = min(l, r);
        l = r = m;

        string ans = "";

        // after some u / d there must be some l / r and vice versa
        if(u && l && r && d)
        {
            while(u--)
                ans.pb('U');
            while(r--)
                ans.pb('R');
            while(d--)
                ans.pb('D');
            while(l--)
                ans.pb('L');
        }

        else
        {
            if(r && l)
                ans = "LR";
            else if(u && d)
                ans = "UD";
        }

        pf(ans.length());
        nl;
        cout << ans << endl;
    }

    return 0;
}
