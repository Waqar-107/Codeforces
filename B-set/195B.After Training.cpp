/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
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

int m;
struct basket
{
	int id, q, m;
	basket(int a, int b, int c)
	{
		id = a; q = b; m = c;
	}
};

bool operator<(basket a, basket b)
{
	if (a.q != b.q)
		return a.q > b.q;

	if(a.m!=b.m)
		return a.m > b.m;

	if (m % 2)
		return a.id > b.id;

	else
		return a.id < b.id;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n;
	priority_queue<basket> pq;

	scanf("%d%d", &n, &m);

	int mid = (m / 2) + (m % 2);
	for (i = 1; i <= m; i++)
	{
		k = abs(mid - i);
		pq.push(basket(i, 0, k));
	}

	for (i = 1; i <= n; i++)
	{
		basket b = pq.top();
		printf("%d\n", b.id);

		pq.pop();
		b.q++;

		pq.push(b);
	}

	return 0;
}
