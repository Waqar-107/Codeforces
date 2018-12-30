/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 250

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
#define pp pair<int,int>

using namespace std;

int main() {
  freopen("in.txt", "r", stdin);

  ll i, j, k;
  ll n, m;
  ll x, y, a, d;

  sfl(n);

  set<ll> ans;
  set<ll> divs;

  x = sqrtl(n * 1.0) + 10;
  for (i = 1; i <= x; i++) {
    if (n % i == 0)
      divs.insert(i), divs.insert(n / i);
  }

  a = 1;
  for (ll e : divs) {
    //nth = a+(n-1)*d
    //n/2{2a+(n-1)*d}
    //d==e
    m = n / e;
    x = a + (m - 1) * e;
    y = m * (x + a);
    y /= 2;

    ans.insert(y);
    //cout<<"inserting "<<y<<endl;
  }

  for (ll e : ans)
    cout << e << endl;

  return 0;
}
