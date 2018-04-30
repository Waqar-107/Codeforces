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
#define N 400
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int main()
{
	freopen("in.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int a, b;
	int sum = 0;

	cin >> n >> a >> b;

	int *s = new int[n];
	for (i = 0; i < n; i++)
		cin >> s[i], sum += s[i];

	sort(s + 1, s + n, greater<int>());

	int cnt = 0;
	double d;

	for (i = 1; i < n; i++)
	{
		d =(double) (a*s[0]) / sum;
		if (d >= b)
			break;

		sum -= s[i];
		cnt++;
	}

	cout << cnt << endl;

	return 0;
}
