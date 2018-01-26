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
#define N 100010
#define inf 100000
#define pp pair<int,int>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s;

	cin >> s;

	k = s.length()-1;
	deque<char> q;
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == '.')
		{
			q.push_back('.'); k = i-1;

			if (i + 1 < s.length())
				q.push_back(s[i + 1]);
			else
				q.push_back('0');

			if (i + 2 < s.length())
				q.push_back(s[i + 2]);
			else
				q.push_back('0');
		}
	}

	if (!q.size())
		q.push_back('.'), q.push_back('0'), q.push_back('0');

	int cnt = 0;
	while (k>=0)
	{
		if (s[k] == '-')
		{
			if (q.front() == ',')
				q.pop_front();

			q.push_back(')');
			q.push_front('$');
			q.push_front('(');

			deque<char> ::iterator it = q.begin();
			while (it != q.end())
			{
				cout << *it; it++;
			}

			return 0;
		}

		q.push_front(s[k]); cnt++;

		if (cnt == 3)
			q.push_front(','), cnt = 0;

		k--;
	}

	if (q.front() == ',')
		q.pop_front();

	q.push_front('$');

	deque<char> ::iterator it = q.begin();
	while (it!=q.end())
	{
		cout << *it; it++;
	}

	return 0;
}
