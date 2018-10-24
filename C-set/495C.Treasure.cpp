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

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1000005
#define inf 1e18

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

void exec() {
	pfs("-1");
	exit(0);
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int x, y;

	string s;
	stack<int> stk;
	vector<int> vec;

	cin >> s;
	n = s.length();

	x = y = 0;

	//check if at some point it is possible that 
	//number of ')' is greater than '(' 
	for (i = 0; i < n; i++)
	{
		if (s[i] == '(')
			stk.push(i), x++;

		//if ')' pop
		//if '#' at least one ')' should be placed 
		else
		{
			if (s[i] == '#')
				y++;

			if (stk.empty())
				exec();

			stk.pop();
		}
	}

	x -= (n - x - y);
	
	for (i = 1; i < y; i++)
		vec.pb(1), x--;

	vec.pb(x);

	//clear the stack
	while (stk.size())
		stk.pop();

	//form a new string and check if it is balanced
	k = y - 1;		//k '#' will replace with ')'
	for (i = 0; i < n; i++)
	{
		if (s[i] == '(')
			stk.push(1);

		else
		{
			if (s[i] == ')')
			{
				if (stk.empty())
					exec();
				else
					stk.pop();
			}

			else
			{
				if (k)
					y = 1, k--;
				else
					y = x;

				if (stk.size() < y)
					exec();

				while (y--)
					stk.pop();
			}
		}
	}

	if (!stk.empty())
		exec();

	for (int e : vec)
		pf(e), pfs("\n");

	return 0;
}
