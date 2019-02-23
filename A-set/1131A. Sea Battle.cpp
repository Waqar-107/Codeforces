/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
#define inf 1e6

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
#define pp pair<int,int>

using namespace std;

int main()
{
   // freopen("in.txt", "r", stdin);

    ll i, j, k;
    ll n, m;
    ll w1,w2,h1,h2;

    sffl(w1,h1);
    sffl(w2,h2);

    ll ans = 0;

    //top ans bottom
    ans += (w1 + 2);
    ans += (w2 + 2);

    //left
    ans += (h1+h2);

    //right
    ans += (h1+h2);

    //corner
    ans += abs(w1-w2);

    pfl(ans);

    return 0;
}
