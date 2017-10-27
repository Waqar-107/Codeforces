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
#define N 1010

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j;
	int n,x;
	ll k;

	scanf("%d%I64d", &n, &k);

	deque<int> q;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		q.push_back(x);
	}

	if (k >= n)
	{
		printf("%d", n);
		return 0;
	}

	int cnt = 0;
	while (true)
	{
		deque<int>::iterator p = q.begin();

		x = q.front();
		p++;

		while (p != q.end())
		{
			if (x > *p)
				cnt++, p++;
			else
				break;
		}

		if (cnt >= k)
		{
			printf("%d", x);
			return 0;
		}
		
		cnt = 1;
		q.pop_front();
		q.push_back(x);
	}

	return 0;
}
