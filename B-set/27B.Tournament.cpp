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
#define N 55
#define pp pair<int,int>

using namespace std;

int cnt[N];
pp a[N];

int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m;
	int x, y;

	cin >> n;
	memset(cnt, 0, sizeof(cnt));

	m = (n*(n - 1)) / 2 - 1;
	vector<pp> vec;

	for (i = 1; i <= m; i++)
	{
		cin >> x >> y;
		cnt[x]++;
		vec.push_back({ x,y });
	}
	
	for (i = 1; i <= n; i++)
		a[i] = { cnt[i],i };
	
	sort(a + 1, a + n + 1, greater<pp>());

	for (i = 1; i < n; i++)
	{
		x = a[i].second;
		for (j = i + 1; j <= n; j++)
		{
			y = a[j].second;
			k = 0;

			//find (x,y) or (y,x) in vec
			for (pp e : vec)
			{
				if ((e.first == x && e.second == y) || (e.first == y && e.second == x)) {
					k = 1; break;
				}

				else
					continue;
			}

			if (!k) {
				cout << x << " " << y << endl;
				return 0;
			}
		}
	}

	return 0;
}
