/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
#define inf 1e18
#define mod 100000007

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
    int n, m, q;
    int a, b, c;
    int ta, tb, tc;

    cin >> a >> b >> c;

    // weeks
    int mx = min(a / 3, min(b / 2, c / 2));

    a -= mx * 3;
    b -= mx * 2;
    c -= mx * 2;

    mx *= 7;
    q = 0;

    // for the rest of the days - if tour started on day i of the week
    // Saturday == 0
    for(i = 0; i < 7; i++)
    {
        k = 0;

        ta = a;
        tb = b;
        tc = c;

        m = 7; j = i;
        while(m--)
        {
            // a
            if(j == 1 || j == 2 || j == 5)
            {
                if(ta)
                    k++, ta--;
                else break;
            }

            // b
            else if(j == 3 || j == 0)
            {
                if(tb)
                    k++, tb--;
                else
                    break;
            }

            else
            {
                if(tc)
                    k++, tc--;
                else
                    break;
            }

            j++;
            if(j == 7)
                j = 0;
        }

        q = max(q, k);
    }

    pf(mx + q);

    return 0;
}
