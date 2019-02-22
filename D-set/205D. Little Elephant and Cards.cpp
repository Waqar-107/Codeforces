/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
#define inf 1e6

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
    int n, m;
    int x, y;

    sf(n);

    set<int> colors;
    map<int,int> shoja, ulta;

    for(i = 0; i < n; i++)
    {
        sff(x, y);

        colors.insert(x);
        colors.insert(y);

        shoja[x]++;
        ulta[y]++;

        if(x == y)
            ulta[x]--;
    }

    int req = (n / 2) + (n % 2);
    int ans = inf, hi = n, lo = 0, mid;

    while(lo <= hi)
    {
        mid = (lo + hi) / 2;

        x = 0;
        auto itr = colors.begin();
        while(itr != colors.end())
        {
            k = shoja[*itr] + min(max(0, ulta[*itr]), mid);

            if(k >= req){
                x = 1;
                break;
            }

            itr++;
        }

        if(x)
            ans = min(ans, mid), hi = mid - 1;
        else
            lo = mid + 1;
    }

    if(ans == inf)
        pf(-1);
    else
        pf(ans);

    return 0;
}
