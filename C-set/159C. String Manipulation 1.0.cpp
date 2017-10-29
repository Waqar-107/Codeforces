/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<functional>
#include<iostream>
#include<map>
#include<queue>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000000
#define pp pair<ll,ll>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	char ch;
	string s,t;

	scanf("%d", &k);

	cin >> s;

	t = "";
	for (i = 0; i < k; i++)
		t += s;

	vector<int> a[26];

	for (i = 0; i < t.length(); i++)
	{
		a[t[i] - 'a'].push_back(i);
	}


	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		cin >> ch;

		j = a[ch - 'a'][m - 1];
		t[j] = '#';
		a[ch - 'a'].erase(a[ch - 'a'].begin() + m - 1);
	}

	for (i = 0; i < t.length(); i++)
	{
		if (t[i] != '#')
			cout << t[i];
	}

	return 0;
}
