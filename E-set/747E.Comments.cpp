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
#define inf 100000
#define pp pair<int,int>

using namespace std;

vector<string> com;
vector<int> num;
vector<string> adj[N];

struct node
{
	string s;
	int i;

	node() {}
	node(string x, int idx)
	{
		s = x;
		i = idx;
	}
};

int toNum(string s)
{
	int i, j, k;
	int l = s.length();

	k = 1; j = 0;
	for (i = l - 1; i >= 0; i--)
	{
		j += (s[i] - 48)*k;
		k *= 10;
	}

	return j;
}

int jdx, sz;
void solve(node x, int lvl)
{
	if (lvl >= 0)
		adj[lvl].push_back(x.s);

	//base
	if (lvl >= 0 && num[x.i] == 0)
		return;

	while (jdx < sz)
	{
		if (lvl == -1)
		{
			node temp = node(com[jdx], jdx);
			jdx++;
			solve(temp, lvl + 1);
		}

		else
		{
			while (num[x.i] > 0)
			{
				num[x.i]--;
				node temp = node(com[jdx], jdx);
				jdx++;
				solve(temp, lvl + 1);
			}

			if (!num[x.i])
				return;
		}
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s, t;

	cin >> s;

	t = "";
	n = s.length();
	for (i = 0; i < n; i++)
	{
		if (s[i] == ',')
		{
			if (isdigit(t[0]))
				num.push_back(toNum(t));

			else
				com.push_back(t);

			t = "";
		}

		else
		{
			t += s[i];
		}
	}

	num.push_back(toNum(t));
	jdx = 0; sz = com.size();

	node r = node("root", -1);
	solve(r, -1);

	k = 0;
	for (i = 0; i < N; i++)
	{
		if (adj[i].size() > 0)
			k++;
		else
			break;
	}

	printf("%d\n", k);
	for (i = 0; i < k; i++)
	{
		m = adj[i].size();
		for (j = 0; j < m; j++)
			cout << adj[i][j] << " ";

		printf("\n");
	}

	return 0;
}
