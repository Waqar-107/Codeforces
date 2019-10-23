/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 110
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

set<ll> ss;
vector<ll> pows;

void build()
{
    ll p = 1, sum = 0;
    while(true)
    {
        sum += p;
        pows.pb(p);

        ss.insert(sum);
        if(sum >= 1e18)
            break;

        p = p * 3;
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int i, j, k;
    int m, t;
    ll n, ans, temp;

    build();

    sf(t);
    while(t--)
    {
        cin >> n;
        auto itr = ss.lower_bound(n);
        ans = *itr;

        if(ans == n)
            pfl(ans);

        else
        {
            k = -1;
            for(j = 0; j < pows.size(); j++)
            {
                if(pows[j] > ans)
                    break;
                else
                    k = j;
            }

            for(j = k; j >= 0; j--)
            {
                if(ans - pows[j] >= n)
                    ans -= pows[j];
            }

            pfl(ans);
        }

        nl;
    }


    return 0;
}
