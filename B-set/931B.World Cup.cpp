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
#define N 100010
#define pp pair<int,int>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int a, b;

	cin >> n >> a >> b;

	vector<int> v1;
	vector<int> v2;

	for (i = 1; i <= n; i++)
		v1.push_back(i);

	k = 1;
	while (1)
	{
		n = v1.size(); //cout << n; nl

		if (n == 2)
		{
			cout << "Final!\n"; return 0;
		}

		for (i = 0; i < n; i+=2)
		{
			//cout << v1[i] << " " << v1[i + 1] << " ";
			if ((v1[i] == a && v1[i + 1] == b) || (v1[i] == b && v1[i + 1] == a))
			{
				cout << k << endl;
				return 0;
			}

			else if (v1[i] == a)
				v2.push_back(v1[i]);

			else if (v1[i + 1] == a)
				v2.push_back(v1[i+1]);

			else if (v1[i] == b)
				v2.push_back(v1[i]);

			else if (v1[i + 1] == b)
				v2.push_back(v1[i + 1]);

			else
				v2.push_back(v1[i]);
		}

		v1.clear();
		v1.assign(v2.begin(), v2.end());
		v2.clear();

		k++;nl nl
	}

	return 0;
}
