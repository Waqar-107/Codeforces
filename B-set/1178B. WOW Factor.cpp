/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
#define inf 1e18

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
    ll l[n], r[n];

    // from the right
    k = 0; m = 0;
    for(i = n - 1; i >= 0; i--)
    {
        if(s[i] == 'o')
            r[i] = m + max(k - 1, 0), k = 0, m = r[i];

        else
            k++;
    }

    // from the left
    k = 0; m = 0;
    for(i = 0; i < n; i++)
    {
        if(s[i] == 'o')
            l[i] = m + max(k - 1, 0), k = 0, m = l[i];
        else
            k++;
    }

    ll ans = 0;
    for(i = 0; i < n; i++)
    {
        if(s[i] == 'o')
            ans += l[i] * r[i];
    }

    pfl(ans);

    return 0;
}
