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

bool cmp(string a, string b)
{
	return a + b < b + a;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	cin >> n;

	string *s = new string[n];
	for (i = 0; i < n; i++)
		cin >> s[i];

	sort(s, s + n, cmp);

	for (i = 0; i < n; i++)
		cout << s[i];

	return 0;
}
