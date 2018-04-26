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
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	cin >> n >> k;
	
	char **s = new char*[n];
	for (i = 0; i < n; i++)
	{
		s[i] = new char[n];
		for (j = 0; j < n; j++)
			s[i][j] = 'S';
	}

	m = 0; int isle = 0;
	for (i = 0; i < n; i++)
	{
		for (j = m; j < n; j+=2)
		{
			if (k == isle)
			{
				cout << "YES\n";
				for (int x = 0; x < n; x++)
				{
					for (int y = 0; y < n; y++)
						cout << s[x][y];
					nl
				}

				return 0;
			}

			s[i][j] = 'L';
			isle++; 
		}

		m = !m;
	}
	
	if (k == isle)
	{
		cout << "YES\n";
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
				cout << s[x][y];
			nl
		}

		return 0;
	}

	cout << "NO";

	return 0;
}
