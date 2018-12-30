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
  //freopen("in.txt", "r", stdin);

  ll i, j, k;
  ll n, m;
  ll x,y;

  ll cx=0, cy=0;
  sfl(n);

  m=n*2;
  for(i=0;i<m;i++)
  {
    sffl(x,y);

    cx+=x;
    cy+=y;
  }

  pfl(cx/n);pfs(" ");pfl(cy/n);

  return 0;
}
