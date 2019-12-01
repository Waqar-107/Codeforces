/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 550
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
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(t);
    while(t--)
    {
        sf(n);

        int a[n];
        for(i = 0; i < n; i++)
        {
            sf(a[i]);
            if(a[i] == 1)
                k = i;
        }

        bool f1 = true;

        // clockwise
        // 4 5 1 2 3
        m = 2;
        for(i = k + 1; i < n; i++)
        {
            if(a[i] != m)
            {
                f1 = false;
                break;
            }

            m++;
        }

        m = n;
        for(i = k - 1; i >= 0; i--)
        {
            if(a[i] != m)
            {
                f1 = false;
                break;
            }

            m--;
        }

        bool f2 = true;

        // counter-clockwise
        // 3 2 1 5 4
        m = n;
        for(i = k + 1; i < n; i++)
        {
            if(a[i] != m)
            {
                f2 = false;
                break;
            }

            m--;
        }

        m = 2;
        for(i = k - 1; i >= 0; i--)
        {
            if(a[i] != m)
            {
                f2 = false;
                break;
            }

            m++;
        }

        if(f1 || f2)
            pfs("YES\n");
        else
            pfs("NO\n");
    }

    return 0;
}
