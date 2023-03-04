/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 10101
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
    int n, m, t;

    sf(t);

    while(t--)
    {
        string s;

        sff(n, k);
        cin >> s;

        map<char, int> cnt;
        for(i = 0; i < n; i++)
            cnt[s[i]]++;

        int ans = 0;
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            ans += min(cnt[ch], cnt[toupper(ch)]);
            ans += min(k, (max(cnt[ch], cnt[toupper(ch)]) - min(cnt[ch], cnt[toupper(ch)])) / 2);
            k -= min(k, (max(cnt[ch], cnt[toupper(ch)]) - min(cnt[ch], cnt[toupper(ch)])) / 2);
        }

        pf(ans); nl;
    }

    return 0;
}
