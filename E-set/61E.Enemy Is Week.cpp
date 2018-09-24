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
#define nl printf("\n");
#define N 1001000
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int x[N * 4];
map<int, int> mp;
int arr[N];

int query(int at, int L, int R, int l, int r)
{
	//out of range
	if (l>R || r<L) return 0;

	//completely in range
	if (l <= L && R <= r) return x[at];

	int mid = (L + R) / 2;
	return query(at * 2, L, mid, l, r) + query(at * 2 + 1, mid + 1, R, l, r);
}

void update(int at, int L, int R, int p)
{
	if (p<L || p>R) return;

	x[at]++;

	if (L == R) return;

	int mid = (L + R) / 2;
	
	update(at * 2, L, mid, p);
	update(at * 2 + 1, mid + 1, R, p);
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, power;
	int y, d;

	sf(n); vector<int> temp;
	for (i = 0; i < n; i++)
	{
		sf(arr[i]);
		temp.pb(arr[i]);
	}
	
	//we map each of the power and limit it from 1 to n
	sort(temp.begin(), temp.end());
	for (i = 0; i < n; i++)
		mp[temp[i]] = i + 1;

	int X, Y;
	d = 0; ll ans = 0;
	for (i = 0; i < n; i++)
	{
		power = mp[arr[i]];

		//how much have been processed having power between L-R
		k = query(1, 1, n, power, n);
		update(1, 1, n, power); 
		d++;

		//k out of d people are greater than me
		//n-d-1 are in my left
		//n-power people have power greater than me
		//so people having greater power than me in my right, X = (n-power)-k
		//so people having less power than me in my right, Y = (n-d-1)-X  
		X = n - power - k;
		Y = (n - d) - X;
		
		//cout << power<<" "<<k<<" "<<d<<" "<<X<<" "<<Y;nl

		ans += ll(k)*ll(Y);
	}

	pfl(ans);

	return 0;
}

/*
algorithm:

1. we limit the power in range 1-n

2. we shall make a segment tree each node having 0 initially. Each node of range (L-R) shall denote
what number of people have been processed already having power in this range

3. in the update operation, if we see that the current processed poweris in range (L-R) then we increament
the nodes value as we can see that another in this range have been processed

*/
