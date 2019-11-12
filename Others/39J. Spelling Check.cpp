/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
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

const ll p = 31;
const ll mod = 1e9 + 7;
ll powers[N];

void computePower()
{
    ll p_pow = 1;
    for(int i = 0; i < N; i++)
    {
        powers[i] = p_pow;
        p_pow = (p_pow % mod * p % mod) % mod;
    }
}

ll bigMod(ll a, ll p, ll m)
{
	//a ^ 0 = 1
	if (p == 0)
		return 1;

	//odd
	if (p & 1)
	{
		//a^p = a * a^{p-1}
		return ((a%m)*bigMod(a, p - 1, m)) % m;
	}

	ll temp = bigMod(a, p / 2, m);
	return (temp*temp) % m;
}

ll modularInverse(ll a, ll m)
{
	return bigMod(a, m - 2, m);
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    string a, b;

    cin >> a >> b;

    n = a.length();
    computePower();

    // (p ^ -1) % mod
    ll p_inv = modularInverse(p, mod);

    ll hashA = 0, hashB = 0;

    for(i = 0; i < n; i++)
        hashA = (hashA + (a[i] - 'a' + 1) * powers[i]) % mod;

    for(i = 0; i < n - 1; i++)
        hashB = (hashB + (b[i] - 'a' + 1) * powers[i]) % mod;

    vector<int> ans;
    ll temp, hashC = 0;
    for(i = 0; i < n; i++)
    {
        // hashC has hash of chars 0...(i - 1)

        temp = (hashA - hashC) % mod;
        if(temp < 0) temp += mod;

        temp = (temp - ((a[i] - 'a' + 1) * powers[i])) % mod;
        if(temp < 0) temp += mod;

        temp = ((temp % mod) * p_inv) % mod;

        temp = (temp % mod + hashC % mod) % mod;
        if(temp == hashB)
            ans.pb(i + 1);

        hashC = (hashC + ((a[i] - 'a' + 1) * powers[i])) % mod;
    }

    pf(ans.size()), nl;
    for(int e : ans)
        pf(e), pfs(" ");

    return 0;
}
