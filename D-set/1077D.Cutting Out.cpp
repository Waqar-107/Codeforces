#define _CRT_SECURE_NO_WARNINGS

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
#include<unordered_set>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

map<int, int> mp;

bool cmp(int a, int b) {
	if (mp[a] != mp[b])
		return mp[a] > mp[b];

	return a > b;
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, cnt;

	sff(n, k);
	for (i = 0; i < n; i++)
		sf(m), mp[m]++;

	vector<int> vec;

	auto itr = mp.begin();
	while (itr != mp.end()) {
		vec.pb(itr->first);
		itr++;
	}

	sort(vec.begin(), vec.end(), cmp);

	int hi = n / k, lo = 1, mid, ans = 0;
	n = vec.size();

	while (lo <= hi)
	{
		mid = (lo + hi) / 2;

		//check if mid copies can be taken
		cnt = 0;
		for (i = 0; i < n; i++)
			cnt += (mp[vec[i]] / mid);

		if (cnt >= k)
		{
			ans = max(ans, mid);
			lo = mid + 1;
		}

		else
			hi = mid - 1;
	}

	vector<int> vans;
	for (i = 0; i < n; i++)
	{
		cnt = mp[vec[i]] / ans;
		while (cnt--) {
			vans.pb(vec[i]);
		}
	}

	for (i = 0; i < k; i++)
		pf(vans[i]);

	return 0;
}
