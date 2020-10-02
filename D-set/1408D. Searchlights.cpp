#include <bits/stdc++.h>

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
#define endl '\n'
#define pii pair<ll int, ll int>
#define all(a) (a).begin(), (a).end()
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define repi(i, n) for (ll i = 0; i < n; i++)
#define rep(i, a, b) for (ll i = a; i <= b; i++)
#define M 1000000007
#define INF 1e18

using namespace std;

int main()
{
    ios;
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> robbers(n), lights(m);
    repi(i, n) cin >> robbers[i].F >> robbers[i].S;
    repi(i, m) cin >> lights[i].F >> lights[i].S;
    vector<ll> dx(1e6 + 1, 0);
    for (auto r : robbers)
    {
        for (auto l : lights)
        {
            ll dy = l.S - r.S + 1;
            if (l.F - r.F >= 0)
                dx[l.F - r.F] = max(dx[l.F - r.F], dy);
        }
    }
    ll ans = 1e9;
    for (ll i = 1e6 - 1; i >= 0; i--)
    {
        dx[i] = max(dx[i], dx[i + 1]);
        ans = min(ans, dx[i] + i);
    }
    cout << ans;
    return 0;
}