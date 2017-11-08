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
#define N 200000
#define pp pair<int,int>

using namespace std;

struct team
{
	int i, j, p;
	team() {};
	team(int a,int b,int c)
	{
		i = a; j = b; p = c;
	}
};

bool cmp(team a, team b)
{
	return a.p > b.p;
}

int main()
{
	int i, j, k;
	int n, m;
	
	scanf("%d", &n);

	bool *vis = new bool[2*n];
	for (i = 0; i < 2 * n; i++)
		vis[i] = 0;

	vector<team> v;
	for (i = 2; i <= 2 * n; i++)
	{
		for (j = 1; j<i; j++)
		{
			cin >> k;
			v.push_back(team(i, j, k));
		}
	}

	sort(v.begin(), v.end(),cmp);

	team t;
	int *ans = new int[2 * n];

	/*for (i = 0; i < v.size(); i++)
	{
		t = v[i];
		cout << t.i << " " << t.j << " " << t.p<<endl;
	}*/

	for (i = 0; i < v.size(); i++)
	{
		t = v[i];
		if (vis[t.i-1] || vis[t.j-1])
			continue;
		else
		{
			vis[t.i-1] = 1; vis[t.j-1] = 1;
			ans[t.i-1] = t.j; ans[t.j-1] = t.i;
		}
	}

	for (i = 0; i < 2 * n; i++)
		printf("%d ", ans[i]);

	return 0;
}
