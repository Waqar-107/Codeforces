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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, l;
    int p, d, cnt = 0;

    sff(n, m); sf(l);

    int a[n], occ[n];
    memset(occ, 0, sizeof(occ));
    for(i = 0; i < n; i++)
        sf(a[i]);

    k = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] <= l){
            if(k)
                cnt++;
            k = 0;

            continue;
        }

        occ[i] = 1;
        k++;
    }

    if(k)
        cnt++;

    while(m--)
    {
        sf(k);
        if(k)
        {
            sff(p, d);

            a[p - 1] += d;
            if(a[p - 1] <= l || occ[p - 1])continue;

            occ[p - 1] = 1;
            if(p == 1)
            {
                if(n > 1 && !occ[1])
                    cnt++;

                else if(n == 1)
                    cnt++;
            }

            else if(p == n)
            {
                if(n > 1 && !occ[n - 2])
                    cnt++;
            }

            else
            {
                p--;
                if(!occ[p - 1] && !occ[p + 1])
                    cnt++;
                else if(occ[p - 1] && occ[p + 1])
                    cnt--;
            }
        }

        else
            pf(cnt), nl;
    }

    return 0;
}
