/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
#define inf 1e18

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
#define pp pair<ll,ll>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    ll i, j, k;
    ll n, m, q, mx = 0;
    ll a, b;

    sffl(n, q);

    deque<ll> dq;

    ll arr[n];
    for(i = 0; i < n; i++)
        sfl(arr[i]), mx = max(mx, arr[i]), dq.pb(arr[i]);

    ll cnt = 0;
    map<ll, pp> mp;

    while(true)
    {
        if(dq.front() == mx)
            break;

        cnt++;
        a = dq.front(); dq.pop_front();
        b = dq.front(); dq.pop_front();
        mp[cnt] = {a, b};

        dq.pb(min(a, b));
        dq.push_front(max(a, b));
    }

    vector<ll> vec;

    dq.pop_front();
    while(dq.size())
    {
        vec.pb(dq.front());
        dq.pop_front();
    }

    while(q--)
    {
        sfl(k);

        if(k <= cnt)
            pffl(mp[k].first, mp[k].second);

        else
        {
            j = (k - cnt) % (n - 1);
            if(j == 0)
                j = n - 1;

            pffl(mx, vec[j - 1]);
        }
        nl;
    }

    return 0;
}
