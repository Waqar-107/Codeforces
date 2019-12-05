/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 10
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
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    string s;

    cin >> s;

    n = s.length();
    set<char> ss;
    int cnt[26] = {0};

    for(i = 0; i < n; i++)
    {
        cnt[s[i] - 'a']++;
        ss.insert(s[i]);
    }

    string ans = "";
    for(i = 0; i < n; i++)
    {
        // if a[i] is the maximum char from i to n then take it
        auto itr = ss.rbegin();
        if(*itr == s[i])
            ans.pb(s[i]);

        cnt[s[i] - 'a']--;
        if(!cnt[s[i] - 'a'])
            ss.erase(s[i]);
    }

    cout << ans;

    return 0;
}
