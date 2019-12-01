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
    int n, m, x, y, z;

    sf(n);

    set<int> s;
    for(i = 0; i < n; i++)
        sf(m), s.insert(m);

    auto itr = s.begin();
    if(s.size() == 1)
        pf(0);

    else if(s.size() == 2)
    {
        x = *itr; itr++;
        y = *itr;

        if((y - x) % 2)
            pf(y - x);
        else
            pf((y - x) / 2);
    }

    else if(s.size() == 3)
    {
        x = *itr; itr++;
        y = *itr; itr++;
        z = *itr;

        if(y - x == z - y)
            pf(z - y);
        else
            pf(-1);
    }

    else
        pf(-1);

    return 0;
}
