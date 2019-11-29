/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 40101
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
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
    int q, r;

    sf(t);

    while(t--)
    {
        set<int> s;
        sf(n);

        s.insert(0);
        k = sqrt(n) + 1;
        for(i = 1; i <= k; i++)
        {
            s.insert(n / i);
            j = n / i;
            if(j)
                s.insert(n / j);
        }

        pf(s.size()), nl;
        for(int e : s)
            printf("%d ", e);
        nl;
    }



    return 0;
}
