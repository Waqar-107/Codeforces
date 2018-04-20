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
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 610
#define pp pair<int,int>
#define inf 10000000

using namespace std;

int pb, pc, ps;
int nb, nc, ns;
int lb, lc, ls;
ll fb, fc, fs;

//i have nb,nc,ns brea,cheese and sausage
//i need lb,lc,ls to make a single burger, assuming i would make x
//the function returns the extra money needed
ll price(ll x)
{
	fb = max(x*lb - nb, (ll)0);
	fc = max(x*lc - nc, (ll)0);
	fs = max(x*ls - ns, (ll)0);

	ll p = fb*pb + fc*pc + fs*ps;
	return p;
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	ll r;
	string s;

	cin >> s;

	n = s.length();
	lb = lc = ls = 0;
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'B')lb++;
		else if (s[i] == 'C')lc++;
		else ls++;
	}

	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;

	//binary search
	ll high, low, mid, z, ans = 0;
	low = 0, high = r + 1000, mid = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;

		z = price(mid);
		if (z == r)
		{
			cout << mid << endl;
			return 0;
		}

		if (z > r)
			high = mid - 1;

		else
			low = mid + 1, ans = mid;
	}

	cout << ans << endl;

	return 0;
}
