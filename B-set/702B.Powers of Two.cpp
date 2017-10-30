/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<functional>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000000
#define pp pair<int,int>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m;
	ll x, y, z;

	vector<ll> p2;

	//powers of 2 less than 2*10^9
	n = 2;
	while (n<=(2*1000000000))
	{
		p2.push_back(n);
		n *= 2;
	}

	scanf("%I64d", &n);
	m = 0;
	map<ll, ll> mp;

	ll *a = new ll[n];
	for (i = 0; i < n; i++)
	{
		scanf("%I64d", &a[i]);
		m = max(m, a[i]);
		mp[a[i]]++;
	}
	
	ll cnt = 0;
	for (i = 0; i < n; i++)
	{
		k = a[i];

		for (j = 0; j < p2.size(); j++)
		{
			x = p2[j] - k;

			if (mp[x])
			{
				if (x == k)
					cnt += (mp[x] - 1);
				else
					cnt += mp[x];
			}
		}
	}

	printf("%I64d\n",cnt/2);

	return 0;
}
