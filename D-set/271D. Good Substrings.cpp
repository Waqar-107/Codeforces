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
    int n, m, cnt;
    string s, good, t;

    cin >> s >> good;
    sf(k);

    n = s.length();
    vector<ll> hashes;

    const int p = 131;
    const ll mod = 72727272727272727LL;

    ll powers[n];
    powers[0] = 1;
    for(i = 1; i < n; i++)
        powers[i] = (powers[i - 1] * p) % mod;

    // let the substring start at i
    ll hash_value, p_pow;
    for(i = 0; i < n; i++)
    {
        cnt = 0, m = 0;

        hash_value = 0;
        p_pow = 1;

        for(j = i; j < n; j++)
        {
            if(good[s[j] - 'a'] == '0')
                cnt++;

            if(cnt <= k)
            {
                // compute hash and insert it in the set
                hash_value = (hash_value + (s[j] - 'a' + 1) * powers[m++]) % mod;
                hashes.pb(hash_value);
            }

            else
                break;
        }
    }

    sort(hashes.begin(), hashes.end());
    pf(unique(hashes.begin(), hashes.end()) - hashes.begin());

    return 0;
}
