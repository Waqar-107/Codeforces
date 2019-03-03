/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
#define inf 1e18

#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n, m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n, m) printf("%d %d",n,m)
#define pffl(n, m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d", n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>
#define ppc pair<char,pp>

using namespace std;

int main() {
  freopen("in.txt", "r", stdin);

  int i, j, k;
  int n, m;
  int sum, x;

  sff(n, k);

  int a[n];
  for (i = 0; i < n; i++)
    sf(a[i]);

  //fix a height for a[0] from [1, 1000]
  int cnt;
  m = 10001;
  for (i = 1; i <= 1000; i++) {
    sum = i;
    cnt = 0;
    for (j = 0; j < n; j++) {
      if (a[j] != sum)
        cnt++;

      sum += k;
    }

    if (cnt < m)
      m = cnt, x = i;
  }

  pf(m), nl;
  for (i = 0; i < n; i++) {
    if (x > a[i])
      cout << "+ " << i + 1 << " " << x - a[i] << endl;
    else if (a[i] > x)
      cout << "- " << i + 1 << " " << a[i] - x << endl;

    x += k;
  }

  return 0;
}
