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
	int n, t, m, x;

	cin >> n >> x;

	int cnt = n-1;
	for (i = 0; i < n; i++)
	{
		cin >> m;
		cnt += m;
	}

	if (cnt == x)
		cout << "YES";

	else
		cout << "NO";
	
	return 0;
}
