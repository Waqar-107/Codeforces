/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200
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

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int a, b, c;

    sf(t);
    while(t--)
    {
        sff(a, b);
        sf(c);

        int ans[3];
        if(c >= a)
        {
            ans[0] = c / 2;
            ans[1] = c - c / 2;
            ans[2] = a;
        }

        else
        {
            ans[0] = a / 2;
            ans[1] = a - a / 2;
            ans[2] = c;
        }

        // now distribute b
        while(b)
        {
            k = 0;
            m = ans[0];
            for(i = 1; i < 3; i++)
            {
                if(ans[i] < m)
                    m = ans[i], k = i;
            }

            ans[k]++;
            b--;
        }

        pf(max(ans[0], max(ans[1], ans[2]))), nl;
    }

    return 0;
}
