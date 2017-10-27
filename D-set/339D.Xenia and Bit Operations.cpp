/***from dust i have come, dust i will be***/

#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<map>
#include<cmath>
#include<algorithm>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000
#define N 1010

using namespace std;

class segTree
{
	int i;
	int *arr, *ans;
public:
	segTree(int n) 
	{
		arr = new int[n+1];
		ans = new int[4 * n];

		i = 1;
	}


	void inputArr(int x)
	{
		arr[i] = x; i++;
	}


	//call with build(1,1,n)
	void build(int at, int l, int r,bool f)
	{
		ans[at] = 0;

		if (l == r)
		{
			ans[at] = arr[l];
			return;
		}

		int mid = (l + r) / 2;

		build(at * 2, l, mid,!f);
		build(at * 2 + 1, mid + 1, r,!f);

		if (!f)
			ans[at] = ans[at * 2] | ans[at * 2 + 1];

		else
			ans[at] = ans[at * 2] ^ ans[at * 2 + 1];
	}


	//call with update(1,1,n,pos,u)
	void update(int at, int l, int r, int pos, int u,bool f)
	{
		if (l == r)
		{
			ans[at] = u;	
			return;
		}

		int mid = (l + r) / 2;
		
		if (pos <= mid)
			update(at * 2, l, mid, pos, u, !f);

		else
			update(at * 2 + 1, mid + 1, r,pos, u, !f);

		if (!f)
			ans[at] = ans[at * 2] | ans[at * 2 + 1];

		else
			ans[at] = ans[at * 2] ^ ans[at * 2 + 1];
	}


	void print()
	{
		printf("%d\n", ans[1]);
	}
};

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, x, p;
	
	scanf("%d%d", &n, &m);

	bool f=1;

	if (n % 2)
		f = 0;

	n = pow(2, n);

	segTree s(n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);

		s.inputArr(x);
	}

	s.build(1, 1, n , f);
	
	while (m--)
	{
		scanf("%d%d", &p, &x);

		s.update(1, 1, n, p, x, f);
		s.print();
	}

	return 0;
}
