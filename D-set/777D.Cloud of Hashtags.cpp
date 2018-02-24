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
#include<unordered_set>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 110
#define inf 10000000
#define pp pair<int,int>

using namespace std;

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	cin >> n;

	string *s = new string[n];
	int *a = new int[n];

	for (i = 0; i < n; i++)
	{
		cin >> s[i];
		a[i] = s[i].length();
	}

	for (i = n-1; i > 0; i--)
	{
		//if ith has len 1
		if (a[i] == 1)
		{
			a[i - 1] = 1;
			continue;
		}
		
		k = -1;
		for (j = 1; j < a[i]; j++)
		{
			if (s[i][j] == s[i - 1][j])
				continue;

			else if(s[i][j]>s[i-1][j])
			{
				k = -7;
				break;
			}

			else
			{
				k = j;
				break;
			}
		}

		if (k > 0)
			a[i - 1] = k;

		else if (k == -1)
			a[i - 1] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < a[i]; j++)
			cout << s[i][j];

		cout << endl;
	}

	return 0;
}
