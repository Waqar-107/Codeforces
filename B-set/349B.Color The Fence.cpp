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
#define N 200010
#define inf 100000000000
#define pp pair<int,int>

using namespace std;

bool cmp(pp a, pp b)
{
	if (a.first == b.first)
		return a.second > b.second;

	return a.first < b.first;
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, v;
	int x, y;

	map<int, int> mp;
	vector<pp> vec;

	cin >> v;
	for (i = 0; i < 9; i++)
		cin >> m, vec.push_back({ m,i + 1 }), mp[i + 1] = m;

	sort(vec.begin(), vec.end(), cmp);
	
	string str = "";
	while (v>0)
	{
		if (v >= vec[0].first)
			v -= vec[0].first, str.push_back(48+vec[0].second);
		else
			break;
	}
	
	if (str.length())
	{
		//now try replacing some of the digits
		for (i = 0; i < str.length(); i++) 
		{
			k = str[i] - 48;
			x = mp[str[i] - 48];
			for (j = 9; j > k; j--)
			{
				y = mp[j];
				if (v + x - y >= 0)
				{
					v = (v + x - y); 
					str[i] = j + 48;
					break;
				}
			}
		}
		
		cout << str << endl;
	}

	else
		cout << "-1" << endl;

	return 0;
}
