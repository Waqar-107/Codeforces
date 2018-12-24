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
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1100
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<string,int>

using namespace std;

int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, mx;
	string s;

	sf(n);

	map<string, int> mp, mp2;
	vector<pp> vec(n);

	mx = -inf;
	for (i = 0; i < n; i++)
	{
		cin >> vec[i].first;
		sf(vec[i].second);

		mp[vec[i].first] += vec[i].second;
	}

	auto itr = mp.begin();
	while (itr != mp.end())
	{
		mx = max(mx, itr->second);
		itr++;
	}

	for (i = 0; i < n; i++)
	{
		mp2[vec[i].first] += vec[i].second;
		if (mp2[vec[i].first] >= mx &&  mp[vec[i].first] >= mx)
		{
			cout << vec[i].first << endl;
			return 0;
		}
	}

	return 0;
}
