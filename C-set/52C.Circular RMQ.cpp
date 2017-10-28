/***from dust i have come, dust i will be***/

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<sstream>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<algorithm>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000000
#define N 100020

using namespace std;

int var;
class segTree
{
	int i;
	int *arr;
	ll *ans, *lazy;

public:
	segTree(int n)
	{
		arr = new int[n + 1];
		ans = new ll[4 * n];
		lazy = new ll[4 * n];

		for (i = 1; i < 4 * n; i++)
			ans[i] = inf, lazy[i] = 0;

		i = 1;
	}

	void input(int x)
	{
		arr[i] = x; i++;
	}

	void build(int at, int l, int r)
	{
		ans[at] = inf;

		if (l == r)
		{
			ans[at] = arr[l];
			return;
		}

		int mid = (l + r) / 2;

		build(at * 2, l, mid);
		build(at * 2 + 1, mid + 1, r);

		ans[at] = min(ans[at * 2], ans[at * 2 + 1]);
	}

	ll query(int at, int l, int r, int L, int R)
	{
		//resolve the pending
		if (lazy[at] != 0)
		{
			ans[at] += lazy[at];

			//if not a leaf, then update the lazy for children
			if (l != r)
			{
				lazy[at * 2] += lazy[at];
				lazy[at * 2 + 1] += lazy[at];
			}

			lazy[at] = 0;
		}

		//out of range
		if (l > r || l > R || L > r)
			return inf;

		//segment lies in the range
		if (l >= L &&  r <= R)
		{
			return ans[at];
		}

		int mid = (l + r) / 2;

		ll x = query(at * 2, l, mid, L, R);
		ll y = query(at * 2 + 1, mid + 1, r, L, R);

		return min(x, y);
	}

	void update(int at, int l, int r, int L, int R, ll u)
	{
		//resolve pendings
		if (lazy[at] != 0)
		{
			ans[at] += lazy[at];

			//if not leaf then set lazy for the children, they will be updated later
			if (l != r)
			{
				lazy[at * 2] += lazy[at];
				lazy[at * 2 + 1] += lazy[at];
			}

			lazy[at] = 0;
		}

		//out of range
		if (l > r || l > R || r < L)
			return;

		//current segment fully in range
		if (l >= L && r <= R)
		{
			ans[at] += u;

			//set the children for later updating
			if (l != r)
			{
				lazy[at * 2] += u;
				lazy[at * 2 + 1] += u;
			}
			
			return;
		}

		//if not completely in range
		int mid = (l + r) / 2;

		update(at * 2, l, mid, L, R, u);
		update(at * 2 + 1, mid + 1, r, L, R, u);

		ans[at] = min(ans[at * 2], ans[at * 2 + 1]);
	}
};

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, x, m;
	int l, r;

	scanf("%d", &n);
	segTree s(n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		s.input(x);
	}

	s.build(1, 1, n);
	scanf("%d", &m);

	while (m>=0)
	{
		m--;
		string str;
		vector <int> v;

		getline(cin, str);
		stringstream ss(str);

		while (ss >> var)
			v.push_back(var);
		
		if (v.size() == 0)
			continue;

		l = v[0] + 1;
		r = v[1] + 1;
		
		if (v.size()==3)
		{
			x = v[2];
			
			if(l<=r)
				s.update(1, 1, n, l, r, x);
			else
			{
				s.update(1, 1, n, l, n,x);
				s.update(1, 1, n, 1, r,x);
			}
		}

		else if(v.size()==2)
		{
			if (l>r)
				cout << min(s.query(1, 1, n, l, n), s.query(1, 1, n, 1, r)) << endl;
				
			else
				cout << s.query(1, 1, n, l, r) << endl;
		}

	}

	return 0;
}
