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
#define N 55
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
#define pp pair<int,int>

using namespace std;

int curr;
string ans;
vector<string> vec;
void dfs(int argNo)
{
	if (curr >= vec.size())
	{
		pfs("Error occurred\n");
		exit(0);
	}

	if (vec[curr] == "pair")
	{
		ans += "pair<";
		curr++;

		dfs(1);
		ans += ",";
		dfs(2);

		ans += ">";
	}

	else
	{
		if (argNo == 0)
		{
			if (vec.size() > 1) {
				pfs("Error occurred\n");
				exit(0);
			}
		}

		curr++, ans += "int";
	}
}

int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m;
	string s;
	
	sf(n);
	while (cin >> s) {
		vec.pb(s);
	}

	curr = 0;

	while (curr < vec.size()) {
		dfs(0);
	}

	cout << ans << endl;

	return 0;
}
