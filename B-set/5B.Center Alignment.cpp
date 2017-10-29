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

	string str;
	vector<string> s;

	m = 0;
	while (getline(cin,str))
	{
		s.push_back(str);

		k = str.length();
		m = max(m, k);
	}

	n = s.size();
	int *a = new int[n];
	int *b = new int[n];

	int flag = 0;
	for (i = 0; i < s.size(); i++)
	{ 
		k = m - s[i].length();

		if (k % 2 == 0)
			a[i] = k / 2;
		else
			a[i] = (k / 2) +flag,flag=1-flag;

		b[i] = k - a[i];
	}

	for (i = 0; i < m + 2; i++)
		cout << '*';

	cout << endl;

	for (i = 0; i < s.size(); i++)
	{
		cout << '*';

		for (j = 0; j < a[i]; j++)
			cout << ' ';

		cout << s[i];

		for (j = 0; j < b[i]; j++)
			cout << ' ';

		cout <<'*'<<endl;
	}

	for (i = 0; i < m + 2; i++)
		cout << '*';

	cout << endl;


	return 0;
}
