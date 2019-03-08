/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
#define inf 1e6

#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n, m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n, m) printf("%d %d",n,m)
#define pffl(n, m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<ll, ll>

using namespace std;

int main() {
  //freopen("in.txt", "r", stdin);

  ll i, j, k;
  ll n, m;

  sfl(n);
  ll a[n], b[n];

  for (i = 0; i < n; i++)sfl(a[i]);
  for (i = 0; i < n; i++)sfl(b[i]);

  ll jaIcchaTai = 0;
  ll con = 0;
  map<pp, ll> mp;

  for (i = 0; i < n; i++) {
    if (b[i] == 0 && a[i] == 0) {
      jaIcchaTai++;
      continue;
    }

    if (b[i] == 0 && a[i]) {
      con++;
      continue;
    }

    //no divide by 0
    if (a[i] == 0)
      continue;


    // d = -b/a
    k = -1;
    if (a[i] < 0)
      a[i] *= -1, k *= -1;

    if (b[i] < 0)
      b[i] *= -1, k *= -1;

    m = __gcd(a[i], b[i]);
    a[i] /= m;
    b[i] /= m;

    mp[{a[i] * k, b[i]}]++;
  }

  ll ans = 0;
  auto itr = mp.begin();
  while (itr != mp.end()) {
    ans = max(ans, itr->second);
    itr++;
  }

  ans = max(ans, con);
  pf(ans + jaIcchaTai);

  return 0;
}
