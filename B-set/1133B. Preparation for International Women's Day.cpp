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
  int n, m;

  sff(n, k);

  int a[n];
  for (i = 0; i < n; i++)
    sf(a[i]), a[i] %= k;

  int cnt[k];
  memset(cnt, 0, sizeof(cnt));

  for (i = 0; i < n; i++)
    cnt[a[i]]++;

  int ans = (cnt[0] / 2) * 2;
  i = 1, j = k - 1;

  while (i <= j) {
    if (i != j) {
      //cout<<cnt[i]<<" "<<cnt[j];nl;
      ans += min(cnt[i], cnt[j]) * 2;
      i++, j--;
    } else
      ans += (cnt[i] / 2) * 2, i++, j--;
  }

  pf(ans);

  return 0;
}
