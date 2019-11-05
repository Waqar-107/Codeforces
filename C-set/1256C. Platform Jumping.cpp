/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1100
#define inf 1e9

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

int c[N], river[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, d;
    int x, y;

    sff(n, m), sf(d);

    for(i = 1; i <= m; i++)
        sf(c[i]);

    i = n; j = m;
    while(j > 0)
    {
        x = c[j];
        while(i  && x)
        {
            river[i] = j;
            x--, i--;
        }

        j--;
    }

    river[n + 1] = 107;

    int pos = 0;
    while(pos <= n)
    {
        pos += d;
        if(pos > n + 1)
            pos = n + 1;

        // if there is a platform
        if(river[pos])
            continue;

        else
        {
            // bring a platform;
            k = -1;
            for(i = pos + 1; pos <= n; i++)
            {
                if(river[i])
                {
                    k = i, y = river[i];
                    break;
                }
            }

            if(k != -1)
            {
                j = k;
                for(i = 1; i <= c[y]; i++)
                    river[j] = 0, j++;

                // start from pos + d
                j = pos;
                for(i = 1; i <= c[y]; i++)
                    river[j] = y, j++;
            }

            if(!river[pos])
            {
                pfs("NO");
                return 0;
            }

            k = pos;
            for(i = k + 1; i <= n; i++)
            {
                if(river[i]) pos++;
                else break;
            }
        }
    }

    pfs("YES\n");
    for(i = 1; i <= n; i++)
        pf(river[i]), pfs(" ");

    return 0;
}
