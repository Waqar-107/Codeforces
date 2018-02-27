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
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 700010
#define inf 10000000
#define pp pair<int,int>

using namespace std;

unordered_map<string,int> mp;
vector<string> subStr[N];

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s, t;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> s;

		//a string of len 9 has 45 substrings
		//len of 9+8+7+..+1
		m = 1;
		while (m<=9)
		{
			j = 0;
			while (j+m<=9)
			{
				t = s.substr(j , m);
				j++;

				if (!mp[t])
					mp[t] = i+1;

				else
				{
					if (mp[t] != i+1)
						mp[t] = -1;
				}

				subStr[i].push_back(t);
			}

			m++;
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 45; j++)
		{
			s = subStr[i][j];
			if (mp[s] == i+1)
			{
				cout << s << endl;
				break;
			}
		}
	}

	return 0;
}
