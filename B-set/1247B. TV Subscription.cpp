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
    int n, m, t, d;

    set<int> s;
    map<int, int> mp;

    sf(t);
    while(t--)
    {
        sff(n, k);
        sf(d);

        int a[n];
        for(i = 0; i < n; i++)
            sf(a[i]);

        s.clear();
        mp.clear();

        for(i = 0; i < d; i++)
            s.insert(a[i]), mp[a[i]]++;

        int ans = s.size();
        i = 0, j = d;

        while(j < n)
        {
            mp[a[i]]--;
            if(!mp[a[i]])
                s.erase(a[i]);

            mp[a[j]]++;
            s.insert(a[j]);

            ans = min(ans, (int)s.size());
            i++, j++;
        }

        pf(ans); nl;
    }

    return 0;
}
