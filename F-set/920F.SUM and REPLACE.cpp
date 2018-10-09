#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<list>
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
#define nl printf("\n")
#define dn 1000100
#define N 100100
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int D[dn], arr[3 * N];
ll tree[12 * N], mx[12 * N];

//determines the number of divisor each number have
void div()
{
	memset(D, 0, sizeof(D));
	for (int i = 1; i < dn; i++)
	{
		for (int j = i; j < dn; j += i)
			D[j]++;
	}
}

void build(int at, int L, int R)
{
	if (L == R) {
		tree[at] = (ll)arr[L];
		mx[at] = (ll)arr[L];

		return;
	}

	int mid = (L + R) / 2;

	build(at * 2, L, mid);
	build(at * 2 + 1, mid + 1, R);

	tree[at] = tree[at * 2] + tree[at * 2 + 1];
	mx[at] = max(tree[at * 2], tree[at * 2 + 1]);
}

ll query(int at, int L, int R, int l, int r)
{
	//outta range
	if (r < L || R < l)return 0;

	//completely in the range
	if (l <= L && R <= r)
		return tree[at];

	int mid = (L + R) / 2;

	return query(at * 2, L, mid, l, r) + query(at * 2 + 1, mid + 1, R, l, r);
}

void update(int at, int L, int R, int l, int r)
{
	//outta range
	if (r < L || R < l)return;

	//most of the values will be 1 or 2 after 6-7 updates
	if (mx[at] <= 2)return;

	//in range and a leaf node
	//unless we go to the leaf we can't replace
	if (l <= L && R <= r && L == R)
	{
		tree[at] = mx[at] = D[mx[at]];
		return;
	}

	int mid = (L + R) / 2;

	update(at * 2, L, mid, l, r);
	update(at * 2 + 1, mid + 1, R, l, r);

	tree[at] = tree[at * 2] + tree[at * 2 + 1];
	mx[at] = max(mx[at * 2], mx[at * 2 + 1]);
}

int main()
{
	//freopen("in2.txt", "r", stdin);
	
	int i, j, k;
	int n, m;
	int t, l, r;

	div();
	
	sff(n, m);
	for (i = 1; i <= n; i++)
		sf(arr[i]);

	build(1, 1, n);

	while (m--)
	{
		sf(t); sff(l, r);

		if (t == 1)
			update(1, 1, n, l, r);

		else
			pfl(query(1, 1, n, l, r)), pfs("\n");
	}

	return 0;
}
