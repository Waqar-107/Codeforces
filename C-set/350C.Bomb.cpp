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
#define N 1001
#define pp pair<int,int>

using namespace std;

bool cmp(pp a, pp b)
{
	if (abs(a.first) != abs(b.first))
		return abs(a.first) < abs(b.first);

	return abs(a.second) < abs(b.second);
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int x, y;

	scanf("%d", &n);

	pp *a = new pp[n];

	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &x, &y);
		a[i] = { x,y };
	}

	sort(a, a + n, cmp);

	vector<pair<pp, char>> v;
	for (i = 0; i < n; i++)
	{
		x = a[i].first; y = a[i].second;

		//---------------------------travel to destination
		//x axis
		if (x > 0)
			v.push_back({ {1,abs(x)},'R' });

		else if (x < 0)
			v.push_back({ { 1,abs(x) },'L' });

		//y axis
		if (y > 0)
			v.push_back({ { 1,abs(y) },'U' });

		else if (y < 0)
			v.push_back({ { 1,abs(y) },'D' });
		//---------------------------travel to destination

		//---------------------------pick it up
		v.push_back({ { 2,-1 }, '#' });
		//---------------------------pick it up


		//---------------------------travel back
		//x axis
		if (x > 0)
			v.push_back({ { 1,abs(x) },'L' });

		else if (x < 0)
			v.push_back({ { 1,abs(x) },'R' });

		//y axis
		if (y > 0)
			v.push_back({ { 1,abs(y) },'D' });

		else if (y < 0)
			v.push_back({ { 1,abs(y) },'U' });
		//---------------------------travel back

		//destroy
		v.push_back({ { 3,-1 }, '#' });
	}

	m = v.size();
	printf("%d\n", m);
	for (i = 0; i < m; i++)
	{
		if (v[i].second == '#')
			printf("%d\n", v[i].first.first);

		else
			printf("%d %d %c\n", v[i].first.first, v[i].first.second, v[i].second);
	}

	return 0;
}
