/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 550
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
    int n, m;
    string s;

    sf(n);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    cin >> s;

    pp pre[n];
    memset(pre, 0, sizeof(pre));

    // --------------------------------
    // prefix
    ll A = 0, B = 0;
    for(i = n - 1; i >= 0; i--)
    {
        pre[i] = {A, B};

        if(s[i] == 'A')
            A += a[i];
        else
            B += a[i];
    }

    ll ans = B;

    A = 0, B = 0;
    for(i = 0; i < n; i++)
    {
        if(s[i] == 'A')
            A += a[i];
        else
            B += a[i];

        // if flipped
        ans = max(pre[i].second + A, ans);
    }
    // --------------------------------

    // --------------------------------
    // suffix
    memset(pre, 0, sizeof(pre));
    A = 0, B = 0;
    for(i = 0; i < n; i++)
    {
        pre[i] = {A, B};

         if(s[i] == 'A')
            A += a[i];
        else
            B += a[i];
    }

    A = 0, B = 0;
    for(i = n - 1; i >= 0; i--)
    {
        if(s[i] == 'A')
            A += a[i];
        else
            B += a[i];

        ans = max(ans, pre[i].second + A);
    }
    // --------------------------------

    pfl(ans);

    return 0;
}
