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
#define pp pair<ll , ll>

using namespace std;

int main() {
  //freopen("in.txt", "r", stdin);

  int i, j, k;
  int n, m, h, t;

  string x, y;

  cin >> x >> y;

  int h1, h2, m1, m2;

  h1 = (x[0] - 48) * 10 + x[1] - 48;
  h2 = (y[0] - 48) * 10 + y[1] - 48;

  m1 = (x[3] - 48) * 10 + x[4] - 48;
  m2 = (y[3] - 48) * 10 + y[4] - 48;

  if (h2 == h1)
    t = m2 - m1;
  else {
    t = 60 - m1 + m2;

    t += (h2 - h1 - 1) * 60;
  }

  t /= 2;

  k = t / 60;
  h1 += k;

  k = t % 60;
  m1 += k;

  if (m1 >= 60)
    h1 += m1 / 60, m1 = m1 % 60;

  if (h1 < 10)
    cout << 0;
  cout << h1 << ":";

  if (m1 < 10)
    cout << 0;
  cout << m1;

  return 0;
}
