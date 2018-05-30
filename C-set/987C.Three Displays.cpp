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
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 3010
#define inf 1000000000000000000
#define D(x) cout << #x " = " << (x) << endl

using namespace std;

vector<int> v[N];

int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m;
	
	scanf("%d", &n);

	int *s = new int[n];
	int *p = new int[n];

	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);

	for (i = 0; i < n; i++)
		scanf("%d", &p[i]);

	//if i is the first element then v[i] has those that can used the third element
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (s[i] < s[j])
				v[i].push_back(p[j]);
		}
	}

	//prices are sorted
	for (i = 0; i < n; i++)
		sort(v[i].begin(), v[i].end());


	ll ans = inf;
	for (i = 0; i < n; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (s[i] < s[j] && v[j].size())
				ans = min(ans, (ll)(p[i] + p[j] + v[j][0]));
		}
	}

	if (ans == inf)
		printf("-1\n");

	else
		printf("%I64d\n", ans);

	return 0;
}
