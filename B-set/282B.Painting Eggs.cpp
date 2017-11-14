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
#define N 100005
#define inf 100000000
#define pp pair<int,int>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s = "";
	
	scanf("%d", &n);

	pp *p = new pp[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &p[i].first, &p[i].second);
	}

	ll a = 0, g = 0;
	ll x, y;

	for (i = 0; i < n; i++)
	{
		x = abs((a + p[i].first) - g);
		y = abs((g + p[i].second) - a);

		if (x <= y)
		{
			s += "A";
			a += p[i].first;
		}

		else
		{
			s += "G";
			g += p[i].second;
		}

	}

	if (abs(a - g) <= 500)
		cout << s;

	else
		cout << "-1";

	return 0;
}
