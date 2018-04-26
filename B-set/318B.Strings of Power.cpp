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

#define dbg printf("in\n")
#define nl printf("\n");
#define N 110
#define pp pair<int,int>
#define inf 10000000

using namespace std;

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s;

	cin >> s;

	vector<string> v;
	n = s.length() - 5 + 1;
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'h' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'v' && s[i + 4] == 'y')
			v.push_back("heavy");

		else if (s[i] == 'm' && s[i + 1] == 'e' && s[i + 2] == 't' && s[i + 3] == 'a' && s[i + 4] == 'l')
			v.push_back("metal");
	}

	ll cnt = 0, c=0;
	n = v.size();

	for (i = n - 1; i >= 0; i--)
	{
		if (v[i] == "metal")
			c++;
		else
			cnt += c;
	}

	cout << cnt;

	return 0;
}
