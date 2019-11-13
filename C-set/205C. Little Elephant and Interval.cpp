/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
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
#define pp pair<ll, ll>

using namespace std;

ll p[N];
ll strToLL(string s)
{
    ll po = 1, sum = 0;
    for(int i = s.length() - 1; i >= 0; i--)
        sum += po * (s[i] - '0'), po *= 10;

    return sum;
}

string llToStr(ll x)
{
    if(x == 0) return "0";

    string s;
    while(x)
    {
        s.pb(x % 10 + '0');
        x /= 10;
    }

    reverse(s.begin(), s.end());
    return s;
}

ll solve(string x)
{
    ll cnt = 0;
    int n = x.length();
    for(int i = 0; i < n; i++)
        cnt += p[i] * 9;

    if(n == 1) return (cnt + x[0] - '0');
    else if(n == 2){
        if(x[0] > x[1]) return (cnt + x[0] - '0' - 1);
        else return (cnt + x[0] - '0');
    }

    // length >= 3
    if(x[0] > x[n - 1])
    {
        cnt += p[n] * (x[0] - 1 - '0');

        ll temp = strToLL(x);
        while(true)
        {
            temp--;
            if(temp % 10 == x[n - 1] - '0') break;
        }

        x = llToStr(temp);
        if(x.length() == n)
        {
             string s;

            for(int i = 1; i < n - 1; i++)
                s.pb(x[i]);

            // +1 for (000..)
            cnt += strToLL(s) + 1;
        }
    }

    else if(x[n - 1] > x[0])
    {
        cnt += p[n] * (x[0] - '0' - 1);
        string s;
        for(int i = 1; i < n - 1; i++)
            s.pb(x[i]);

        // +1 for (000..)
        cnt += strToLL(s) + 1;
    }

    else
    {
        cnt += p[n] * (x[0] - '0' - 1);

        string s;
        for(int i = 1; i < n - 1; i++)
            s.pb(x[i]);

        // +1 for (000..)
        cnt += strToLL(s) + 1;
    }

    return cnt;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    ll  l, r;

    p[0] = 0;
    p[1] = p[2] = 1;
    for(i = 3; i < N; i++)
        p[i] = p[i - 1] * 10;

    cin >> l >> r;

    ll x = solve(llToStr(l - 1));
    ll y = solve(llToStr(r));

    //cout << x << " " << y;nl;
    cout << (y - x) << endl;

    return 0;
}
