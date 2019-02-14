/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1000100

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

void f() {
  pfs("NO\n");
  exit(0);
}

int main() {
  freopen("in.txt", "r", stdin);

  int i, j, k;
  int n, m;

  n = 3;
  int a[3], b[3];
  for (i = 0; i < n; i++)
    sf(a[i]);

  for (i = 0; i < n; i++)
    sf(b[i]);

  //green
  if (a[0] <= b[0])
    b[0] -= a[0];
  else
    f();

  //anything except black
  if (a[1] > b[1] + b[0])f();

  if (a[1] >= b[1]) {
    a[1] -= b[1];
    b[1] = 0;
    b[0] -= a[1];
  } else
     b[1] -= a[1], a[1] = 0;

  //anything
  if (b[0] + b[1] + b[2] < a[2])f();

  pfs("YES\n");

  return 0;
}
