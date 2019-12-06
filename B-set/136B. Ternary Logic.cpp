/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 20
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

string toTernary(int n)
{
    string ret = "";
    while(n)
    {
        ret.pb(n % 3 + '0');
        n /= 3;
    }

    reverse(ret.begin(), ret.end());

    if(ret == "") ret = "0";
    return ret;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int x, y;
    string a, b, c;

    cin >> x >> y;

    a =  toTernary(x);
    c = toTernary(y);

    n = max(a.length(), c.length());

    reverse(a.begin(), a.end());
    while(a.length() < n)
        a.pb('0');
    reverse(a.begin(), a.end());

    reverse(c.begin(), c.end());
    while(c.length() < n)
        c.pb('0');
    reverse(c.begin(), c.end());

    ll p = 1;
    ll ans = 0;
    b = string("0", n);

    for(i = n - 1; i >= 0; i--)
    {
        for(j = 0; j < 3; j++)
        {
            if((j + a[i] - '0') % 3 == (c[i] - '0')){
                b[i] = j + '0';
                ans += (p * j);
                p *= 3;
            }
        }
    }

    cout << ans;

    return 0;
}
