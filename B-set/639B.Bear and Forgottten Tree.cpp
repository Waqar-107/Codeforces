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

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, h, d;
	int h2, d2;

	cin >> n >> d >> h;

	//d <= 2*h and d>=h
	if (d > 2 * h || d<h)
	{
		cout << "-1\n";
		return 0;
	}

	h2 = h;
	k = 1;

	vector<pp> v;

	//first handle the height
	while (h2--)
	{
		v.push_back({ k,k + 1 });
		k++;
	}

	//case d==h
	if (d == h)
	{
		if (k == 2 && n>2)
		{
			cout << "-1\n";
			return 0;
		}

		n -= (h + 1); k++;
		while (n--)
		{
			v.push_back({ 2,k });
			k++;
		}
	}

	else
	{
		//from the root add nodes to fill d
		d2 = abs(h - d);
		j = 1; k++;
		while (d2--)
		{
			v.push_back({ j,k });
			j = k;
			k++;
		}

		while (k <= n)
		{
			v.push_back({ 1,k });
			k++;
		}
	}
	
	for (pp p : v)
		cout << p.first << " " << p.second << endl;

	return 0;
}
