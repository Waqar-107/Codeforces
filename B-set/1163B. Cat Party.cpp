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

int cnt[N], color[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, x = 0;

    sf(n);

    int a[n];
    set<int> s;

    for(i = 0; i < n; i++)
    {
        sf(a[i]);
        s.insert(a[i]);

        // all are of the same color
        if(s.size() == 1)
            x = i + 1;

        // all colors have occurrence == 1
        else if(s.size() == i + 1)
            x = i + 1;
    }

    // all the colors has same occurrence, a single color has occurrence == 1
    int mx = 0;
    memset(cnt, 0, sizeof(cnt));
    memset(color, 0, sizeof(color));

    for(i = 0; i < n; i++)
    {
        cnt[color[a[i]]]--;
        color[a[i]]++;
        cnt[color[a[i]]]++;

        mx = max(mx, color[a[i]]);

        if(cnt[1] == 1 && cnt[mx] * mx == i)
            x = max(x, i + 1);

        else if(cnt[mx - 1] * (mx - 1) == i + 1 - mx && cnt[mx] == 1)
            x = max(x, i + 1);
    }

    pf(x);

    return 0;
}
