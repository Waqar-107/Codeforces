/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1010
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

    sf(t);
    while(t--)
    {
        sff(n, m);

        int a[n];
        for(i = 0; i < n; i++)
            sf(a[i]);

        map<int, int> mp;
        for(i = 0; i < m; i++)
            sf(k), mp[k]++;

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n - i - 1; j++)
            {
                if(a[j] > a[j + 1] && mp[j + 1])
                    swap(a[j], a[j + 1]);
            }
        }

        k = 1;
        for(i = 1; i < n; i++)
        {
            //pf(a[i]);nl;
            if(a[i] < a[i - 1]){
                k = 0;
                break;
            }
        }

        if(k) pfs("YES\n");
        else pfs("NO\n");
    }

    return 0;
}
