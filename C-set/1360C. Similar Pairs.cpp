/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 8010
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

        vector<int> even, odd;
        map<int, int> mp;

        for(i = 0; i < n; i++){
            sf(m);

            if(m % 2) odd.pb(m), mp[m]++;
            else even.pb(m);
        }

        if(even.size() % 2 == 0 && odd.size() % 2 == 0)
            pfs("YES\n");
        else
        {
            k = 0;
            for(i = 0; i < even.size(); i++)
            {
                if(mp[even[i] - 1] || mp[even[i] + 1]){
                    k = 1;
                    break;
                }
            }

            if(k) pfs("YES\n");
            else pfs("NO\n");
        }
    }

    return 0;
}
