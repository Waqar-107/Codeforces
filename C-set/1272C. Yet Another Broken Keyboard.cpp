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
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    string s;
    char c;

    sff(n, k);
    cin >> s;

    int a[30] = {0};
    for(i = 0; i < k; i++)
    {
        cin >> c;
        a[c - 'a'] = 1;
    }

    ll len = 0;
    ll ans = 0;
    for(i = 0; i < n; i++)
    {
        if(a[s[i] - 'a'])
            len++;
        else
        {
            ans += (len * (len + 1)) / 2;
            len = 0;
        }
    }

    if(len) ans += (len * (len + 1)) / 2;
    pfl(ans);

    return 0;
}
