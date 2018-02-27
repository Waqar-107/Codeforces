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
#define inf 10000000
#define pp pair<int,int>

using namespace std;

int main()
{
	int i, j, k;
	int n, m;
	int a[26];
	char ch[] = { 'a','e','i','o','u' };
	string s;
	queue<int> q;

	cin >> s;
	memset(a, 0, sizeof(s));

	n = s.length();

	i = 0;
	while (true)
	{
		set<char> sx;

		if (i + 2 >= n)
			break;

		sx.insert(s[i]); sx.insert(s[i + 1]); sx.insert(s[i + 2]);

		k = 0;
		for (j = 0; j < 5; j++)
		{
			if (ch[j] == s[i] || ch[j] == s[i + 1] || ch[j] == s[i + 2])
				k++;
		}
		
		//space
		if (k == 0 && sx.size()>1)
			q.push(i + 1), i = i + 2;
		else
			i++;
	}

	for (i = 0; i < n; i++)
	{
		cout << s[i];
		if (q.size())
		{
			if (i == q.front())
				cout << ' ',q.pop();
		}
	}

	return 0;
}
