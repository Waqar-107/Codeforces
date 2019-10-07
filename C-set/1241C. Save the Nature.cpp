/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 998244353

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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j;
    int n, m, q;
    int x, y, a, b;
    ll k, mult;

    sf(q);
    while(q--)
    {
        sf(n);

        int p[n];
        for(i = 0; i < n; i++)
            sf(p[i]);

        sort(p, p + n, greater<int>());

        sff(x, a);
        sff(y, b);
        sfl(k);

        // the larger percentage kept in x
        if(x < y)
            swap(x, y), swap(a, b);

        int hi = n, lo = 0, mid, ans = n + 100;
        ll sum;

        while(lo <= hi)
        {
            mid = (hi + lo) / 2;

            //check if from 1 to mid tickets are enough (1-n are re-arranged for the sake of greedy)
            sum = 0, j = 0;
            for(i = 1; i <= mid; i++)
            {
                if(j >= n) break;

                if(i % a == 0 && i % b == 0)
                {
                    mult = (p[j++] / 100) * (x + y);
                    sum += mult;
                }
            }

            for(i = a; i <= n; i += a) {
                if(j >= n || i > mid) break;

                if(i % b != 0)
                {
                    mult = (p[j++] / 100) * x;
                    sum += mult;
                }
            }

            for(i = b; i <= n; i += b){
                if(j >= n || i > mid) break;

                if(i % a != 0)
                {
                    mult = (p[j++] / 100) * y;
                    sum += mult;
                }
            }

            // enough, try to minimize ans
            if(sum >= k)
                ans = min(ans, mid), hi = mid - 1;

            // not enough, we need more tickets
            else
                lo = mid + 1;
        }

        if(ans == n + 100)
            pf(-1);
        else
            pf(ans);

        nl;
    }

    return 0;
}
