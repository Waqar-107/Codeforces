/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
#define inf 1e18

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
#define pp pair<char, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    int last, first;

    sf(q);
    while(q--)
    {
       sff(n, k);
       set<int> s;

       for(i = 0; i < n; i++)
        sf(m), s.insert(m);

       first = *s.begin();
       last = *s.rbegin();

       int hi = last + k, lo = first - k;
       int mid, ans = -1;

       while(lo <= hi)
       {
           mid = (hi + lo) / 2;

           if(abs(mid - first) <= k && abs(mid - last) <= k)
            ans = max(ans, mid), lo = mid + 1;
           else
            hi = mid - 1;
       }

       pf(ans); nl;
    }

    return 0;
}
