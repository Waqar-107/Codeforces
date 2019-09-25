/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
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

string Z_Algo(string uno, string dos)
{
    string s =  uno + "$" + dos;

    int n = s.length();
    int z[n];

    memset(z, 0, sizeof(z));

    // make a window that matches with prefix of s
    int l = 0, r = 0;
    for(int i = 1; i < n; i++)
    {
        if(i <= r)
            z[i] = min(r - i + 1, z[i - l]);

        while(i + z[i] < n && s[z[i]] == s[i + z[i]])
            z[i]++;

        if(i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;

        // a is inside b
        if(z[i] >= uno.length())
            return dos;
    }

    int len = 0;
    for(int i = uno.length() + 1; i < n; i++)
    {
        if(i + z[i] == n)
        {
            len = z[i];
            break;
        }
    }

    string ret = dos;
    for(int i = len; i < uno.length(); i++)
        ret.pb(uno[i]);

    return ret;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    string s[3];

    int a[3];
    for(i = 0; i < 3; i++)
        cin >> s[i], a[i] = i;

    int mn = 1e9;
    do{
        string ans = Z_Algo(s[a[0]], s[a[1]]);
        ans = Z_Algo(ans, s[a[2]]);

        mn = min(mn, (int)ans.length());
    }while(next_permutation(a, a + 3));

    pf(mn);

    return 0;
}
