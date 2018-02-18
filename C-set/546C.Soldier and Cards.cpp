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
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1000010
#define inf 1000000
#define pp pair<char, char>

using namespace std;

class DisjointSetUnion
{
	int n;
	int *p, *r;
public:
	DisjointSetUnion(int n)
	{
		this->n = n;
		p = new int[n + 1];
		r = new int[n + 1];

		for (int i = 0; i <= n; i++)
			r[i] = 1, p[i] = i;
	}

	void Union(int a, int b)
	{
		int x = Find(a);
		int y = Find(b);

		if (r[x] > r[y])
		{
			p[y] = x;
			r[x] += r[y];
		}

		else
		{
			p[x] = y;
			r[y] += r[x];
		}
	}

	int Find(int x)
	{
		if (p[x] == x)
			return x;

		return p[x] = Find(p[x]);
	}
};

int a[N];
set<int> adj[N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, p;
	string s, t, z;
	char ch, ch2, ch3;

	cin >> n;

	s = ""; t = "";

	cin >> m;
	for (i = 0; i < m; i++)
	{
		cin >> k;
		s += (k + 48);
	}

	cin >> m;
	for (i = 0; i < m; i++)
	{
		cin >> k;
		t += (k + 48);
	}

	k = 0;
	map<string, bool> mp;

	while (s.length() && t.length())
	{
		z = s + '#' + t;
		if (mp[z])
		{
			cout << "-1\n";
			return 0;
		}

		mp[z] = 1; //cout << " making true " << z << endl;
		k++;

		ch = s[0]; ch2 = t[0];
		t.erase(t.begin(), t.begin() + 1);
		s.erase(s.begin(), s.begin() + 1);

		if (ch > ch2)
		{
			s.push_back(ch2); 
			s.push_back(ch);
		}

		else
		{
			t.push_back(ch);
			t.push_back(ch2);
		}
	}

	cout << k << " ";
	if (s.length() > t.length())
		cout << 1 << endl;
	else
		cout << 2 << endl;

	return 0;
}
