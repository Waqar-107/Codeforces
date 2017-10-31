/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000000
#define pp pair<int,int>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s, t;

	cin >> s >> t;

	int a[26], b[26];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));

	for (i = 0; i < s.length(); i++)
		a[s[i] - 'a']++;

	for (i = 0; i < t.length(); i++)
		b[t[i] - 'a']++;

	int cnt = 0;
	for (i = 0; i < 26; i++)
	{
		if (b[i] > 0 && a[i] == 0)
		{
			cout << "-1";
			return 0;
		}

		if (b[i] >= a[i])
			cnt += a[i];
		
		else

			cnt += b[i];
	}

	if (cnt)
		printf("%d", cnt);

	else
		printf("-1");

	return 0;
}
