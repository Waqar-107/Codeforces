/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200010
#define inf 1000000000


using namespace std;

class DisjollSetUnion
{
	ll n;
	ll *p, *r, *solRank;
public:
	DisjollSetUnion(ll n, ll *a)
	{
		this->n = n;
		p = new ll[n + 1];
		r = new ll[n + 1];
		solRank = new ll[n + 1];

		for (ll i = 0; i <= n; i++)
			r[i] = 1, p[i] = i;

		for (ll i = 1; i <= n; i++)
			solRank[i] = a[i - 1];
	}

	void Union(ll a,ll b)
	{
		ll x = Find(a);
		ll y = Find(b);

		if (r[x] > r[y])
		{
			p[y] = x;
			r[x] += r[y];
			solRank[x] += solRank[y];
			solRank[y] = solRank[x];
		}

		else
		{
			p[x] = y;
			r[y] += r[x];
			solRank[y] += solRank[x];
			solRank[x] = solRank[y];
		}
	}

	ll Find(ll x)
	{
		if (p[x] == x)
			return x;

		return p[x] = Find(p[x]);
	}

	ll getRank(ll x)
	{
		ll a = Find(x);
		/*for (ll i = 1; i <= n; i++)
			cout << solRank[i] << " ";
		nl*/
		return solRank[a];
	}
};

int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m, t;

	scanf("%I64d", &n);

	ll *a = new ll[n];
	ll *b = new ll[n];
	bool *vis =new bool[n+1];

	for (i = 0; i <= n; i++)
		vis[i] = 0;

	for (i = 0; i < n; i++)
		scanf("%I64d", &a[i]);

	for (i = 0; i < n; i++)
		scanf("%I64d", &b[i]);

	DisjollSetUnion dsu(n, a);
	stack<ll> s;
	s.push(0);

	ll mx = 0;
	for (i = n - 1; i > 0; i--)
	{
		m = a[b[i] - 1]; vis[b[i]] = 1;

		if (b[i] - 1 > 0 && vis[b[i] - 1])
		{
			dsu.Union(b[i], b[i] - 1);
			m = max(m, dsu.getRank(b[i]));
		}

		if (b[i] + 1 <= n && vis[b[i] + 1])
		{
			dsu.Union(b[i], b[i] + 1);
			m = max(m, dsu.getRank(b[i]));
		}

		mx = max(m, mx);
		s.push(mx);
	}

	while (!s.empty())
	{
		printf("%I64d\n", s.top()); s.pop();
	}

	return 0;
}
