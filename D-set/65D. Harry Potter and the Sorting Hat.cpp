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
#include<sstream>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 35
#define inf 1000000

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

int n, m;
string hogwarts;
set<string> hermione;
set<vector<int>> done;
vector<int> dp(4, 0);

void solve(int g, int s, int r, int h, int idx)
{
	//optimize
	if (hermione.size() == 4) return;

	//hermione
	if (idx == n)
	{
		int mn = min(g, min(s, min(r, h)));
		
		if (g == mn)
			hermione.insert("Gryffindor");

		if (s == mn)
			hermione.insert("Slytherin");

		if (r == mn)
			hermione.insert("Ravenclaw");

		if (h == mn)
			hermione.insert("Hufflepuff");

		return;
	}

	//if the current config. "g, s, r, h" is in the set 'done' then no need to expand the recursion tree
	if (done.count(dp))
		return;

	done.insert(dp);

	if (hogwarts[idx] == 'G')
		dp[0]++, solve(g + 1, s, r, h, idx + 1), dp[0]--;

	else if (hogwarts[idx] == 'S')
		dp[1]++, solve(g, s + 1, r, h, idx + 1), dp[1]--;

	else if (hogwarts[idx] == 'R')
		dp[2]++, solve(g, s, r + 1, h, idx + 1), dp[2]--;

	else if (hogwarts[idx] == 'H')
		dp[3]++, solve(g, s, r, h + 1, idx + 1), dp[3]--;

	else
	{
		 int mn = min(g, min(s, min(r, h)));
		 //cout << g << " " << s << " " << r << " " << h << " " << idx << " " << m; nl;
		//if there are more than one house that have mn students then that can be a possible of choice
		 if(g == mn)
			 dp[0]++, solve(g + 1, s, r, h, idx + 1), dp[0]--;

		 if (s == mn)
			 dp[1]++, solve(g, s + 1, r, h, idx + 1), dp[1]--;

		 if (r == mn)
			 dp[2]++, solve(g, s, r + 1, h, idx + 1), dp[2]--;

		 if (h == mn)
			 dp[3]++, solve(g, s, r, h + 1, idx + 1), dp[3]--;
	}
}

int main()
{
	freopen("in2.txt", "r", stdin);
	
	int i, j, k;
	
	sf(n);
	cin >> hogwarts;

	solve(0, 0, 0, 0, 0);

	for (string s : hermione)
		cout << s << endl;
	
	return 0;
}
