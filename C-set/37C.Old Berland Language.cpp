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
#define N 1050
#define pp pair<int,int>

using namespace std;

int curr, n;
pp a[N];
string word[N];

void dfs(string s, int depth)
{
	if (curr > n)
		return;
	
	//if len of string is equal to the required one
	//then we take it and stops here
	//by stopping here we ensure that this string will not be a prefix to anyother
	if (a[curr].first == depth)
	{
		word[a[curr].second] = s;
		curr++;
		return;
	}

	s.push_back('0');
	dfs(s, depth + 1);

	s.back() = '1';
	dfs(s, depth + 1);

	s.pop_back();
}

int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;

	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> k;
		a[i] = { k,i };
	}
	
	sort(a + 1, a + n + 1);

	curr = 1;
	dfs("", 0);
	
	if (curr <= n)
		cout << "NO" << endl;

	else
	{
		cout << "YES" << endl;
		for (i = 1; i <= n; i++)
			cout << word[i] << endl;
	}

	return 0;
}
