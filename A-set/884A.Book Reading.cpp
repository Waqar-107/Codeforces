/***from dust i have come, dust i will be***/

#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<algorithm>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, t, m;

	cin >> n >> t;

	int cnt = 0;
	while (n--)
	{
		cin >> m;

		k = 86400 - m;
		t -= k; cnt++;

		if (t <= 0)
			break;
	}

	cout << cnt;
	
	return 0;
}
