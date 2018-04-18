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
#define N 100010
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;

int a[N];
int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	map<int, int> mp;
	set<int> s;

	sff(n, k);
	for (i = 0; i < n; i++)
		sf(a[i]);

	//first deal with the first k numbers
	for (i = 0; i < k; i++)
	{
		mp[a[i]]++;
		if (mp[a[i]] == 1)
			s.insert(a[i]);
		else
			s.erase(a[i]);
	}

	set<int>::reverse_iterator itr = s.rbegin();
	if (s.empty())
		pfs("Nothing");
	else
		pf(*itr);

	j = 0;
	for (i = k; i < n; i++)
	{
		mp[a[j]]--; //cout << a[j] << "  " << mp[a[j]];nl
		if (mp[a[j]] == 1)
			s.insert(a[j]);
		else
			s.erase(a[j]);

		mp[a[i]]++; //cout << a[i] << "  " << mp[a[i]]; nl
		if (mp[a[i]] == 1)
			s.insert(a[i]);
		else
			s.erase(a[i]);

		itr = s.rbegin();
		if (s.empty())
			pfs("Nothing");
		else
			pf(*itr);

		j++;
	}

	return 0;
}
