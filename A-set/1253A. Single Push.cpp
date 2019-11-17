/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
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
    int n, m, q;

    sf(q);
    while(q--)
    {
        sf(n);

        int a[n], b[n];
        for(i = 0; i < n; i++)
            sf(a[i]);
        for(i = 0; i < n; i++)
            sf(b[i]);

        bool f = true;
        k = 0; m = -1;
        for(i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                if(b[i] < a[i]){f = false; break;}
                k = b[i] - a[i];
                m = i;
                break;
            }
        }

        for(i = m; i < n; i++)
        {
            if(a[i] == b[i]) break;
            a[i] += k;
        }

        for(i = 0; i < n; i++)
        {
            if(a[i] != b[i]){
                f = false;
                break;
            }
        }

        if(f)
            pfs("YES\n");
        else
            pfs("NO\n");
    }

    return 0;
}

