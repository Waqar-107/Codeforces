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
    int n, m, l, x;

    sf(l); n = -1;
    for(i = 5; i <= l; i++)
    {
        if(l % i == 0 && l / i >= 5)
        {
            n = i;
            m = l / i;
            break;
        }
    }

    if(n == -1)
        pf(-1);
    else
    {
        string str = "aeiou";
        k = 0;

        for(i = 0; i < n; i++)
        {
            x = k;
            for(j = 0; j < m; j++)
            {
                cout<<str[x];
                x++;

                if(x == 5)
                    x = 0;
            }

            k++;
            if(k == 5)
                k = 0;
        }
    }

    return 0;
}
