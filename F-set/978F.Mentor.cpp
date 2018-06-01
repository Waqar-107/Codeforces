#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cctype>
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
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 200100

using namespace std;

int a[N], mp[N];
int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m, t;
	int u, v;
	
	cin >> n >> m;
	vector<int> vec;

	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		vec.push_back(a[i]);
	}
	
	sort(vec.begin(), vec.end());
	memset(mp, 0, sizeof(mp));

	//count how many will be forbidden
	for (i = 1; i <= m; i++)
	{
		cin >> u >> v;

		if (a[u] > a[v])
			mp[u]++;

		else if (a[u] < a[v])
			mp[v]++;
	}

	for (i = 1; i <= n; i++)
	{
		k = lower_bound(vec.begin(), vec.end(), a[i]) - vec.begin();

		cout << k - mp[i] << " ";
	}

	return 0;
}
