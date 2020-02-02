/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 101010
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
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int a, b, c;

    sf(t);
    while(t--)
    {
        sf(n);

        a = -1;
        for(i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                a = i;
                n /= i;
                break;
            }
        }

        if(a == -1)
        {
            pfs("NO\n");
            continue;
        }

        b = -1;
        for(i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0 && i != a && n / i != a && i != n / i)
            {
                b = i;
                c = n / i;
                break;
            }
        }

        if(b == -1)
            pfs("NO\n");
        else
        {
            pfs("YES\n");
            cout << a << " " << b << " " << c; nl;
        }
    }


    return 0;
}

