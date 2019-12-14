/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
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
        sf(n);

        set<int> s;

        for(i = 0; i < n; i++)
        {
            sf(m);

            if(m % 2 == 0)
                s.insert(m);
        }

        int ans = 0;
        while(s.size())
        {
            ans++;

            m = *s.rbegin();
            k = m / 2;

            if(k % 2 == 0)
                s.insert(k);

            s.erase(m);
        }

        pf(ans), nl;
    }

    return 0;
}
