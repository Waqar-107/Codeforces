/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 201010
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>
#define mod 1000000007

using namespace std;

int a[N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, f;

    sff(n, m), sf(k);
    for(i = 1; i <= n; i++)
        sf(a[i]);

    int hi = n, lo = 1, mid, ans = 0;
    while(lo <= hi)
    {
        mid = (lo + hi) / 2;

        int curr = 0, cnt = 1;
        f = 1;

        for(i = n - mid + 1; i <= n; )
        {
            if(cnt > m)
            {
                f = 0;
                break;
            }

            if(a[i] + curr <= k)
                curr += a[i], i++;
            else
                cnt++, curr = 0;
        }
        
        if(!f)
            hi = mid - 1;
        else
            ans = max(ans, mid), lo = mid + 1;
    }

    pf(ans);

    return 0;
}
