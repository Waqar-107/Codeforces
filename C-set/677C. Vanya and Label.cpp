/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1100
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
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    string s;

    cin >> s;

    map<char, int> mp;

    k = 0;
    for(char ch = '0'; ch <= '9'; ch++)
        mp[ch] = k++;
    for(char ch = 'A'; ch <= 'Z'; ch++)
        mp[ch] = k++;
    for(char ch = 'a'; ch <= 'z'; ch++)
        mp[ch] = k++;

    mp['-'] = k++;
    mp['_'] = k;

    n = 63;
    int a[n + 10];
    memset(a, 0, sizeof(a));

    for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= n; j++)
            a[i & j]++;
    }

    ll ans = 1, mod = 1e9 + 7;
    n = s.length();
    for(i = 0; i < n; i++)
    {
        //cout<<s[i]<<" "<<mp[s[i]]<<" "<<a[mp[s[i]]];nl;
        ans = (ans % mod * a[mp[s[i]]] % mod) % mod;
    }

    pfl(ans);

    return 0;
}
