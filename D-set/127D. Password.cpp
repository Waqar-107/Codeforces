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

int z[N];
string Z_Algo(string text)
{
    string s = text;
    int n = s.length();

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
    }

    int mx = 0, idx = -1;
    for(int i = 0; i < n; i++)
    {
        // suffix
        if(i + z[i] == n && mx >= n - i)
        {
            idx = i;
            break;
        }

        mx = max(mx, z[i]);
    }

    string ans = "";
    if(idx != -1)
    {
        for(int i = idx; i < n; i++)
            ans.pb(s[i]);
    }

    else ans = "Just a legend";

    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    string s;

    cin >> s;
    cout << Z_Algo(s);

    return 0;
}
