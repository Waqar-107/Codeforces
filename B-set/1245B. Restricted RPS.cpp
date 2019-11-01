/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 10000100
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
    int a, b, c, w;

    sf(t);
    while(t--)
    {
        sf(n);

        sff(a, b); sf(c);
        string s;

        cin >> s;

        w = (n / 2) + (n % 2);

        int ans[n];
        memset(ans, 0, sizeof(ans));

        k = 0;
        for(i = 0; i < n; i++)
        {
            if(s[i] == 'R')
            {
                if(b)
                    k++, b--, ans[i] = 2;
            }

            else if(s[i] == 'P')
            {
                if(c)
                    k++, c--, ans[i] = 3;
            }

            else
            {
                if(a)
                    k++, a--, ans[i] = 1;
            }
        }

        if(k >= w)
        {
            pfs("YES\n");
            for(i = 0; i < n; i++)
            {
                if(!ans[i])
                {
                    if(a)
                        ans[i] = 1, a--;
                    else if(b)
                        ans[i] = 2, b--;
                    else
                        ans[i] = 3, c--;
                }

                if(ans[i] == 1)
                    pfs("R");
                else if(ans[i] == 2)
                    pfs("P");
                else
                    pfs("S");
            }
            nl;
        }

        else
            pfs("NO\n");
    }

    return 0;
}
