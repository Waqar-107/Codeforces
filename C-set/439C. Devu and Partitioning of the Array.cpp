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
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100010
#define inf 100000
#define pp pair<int,int>

using namespace std;

vector<int> v[N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, p;
	int kt;

	scanf("%d%d%d", &n, &kt, &p);

	vector<int> ev;
	vector<int> odd;

	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);

		if (m % 2)
			odd.push_back(m);
		else
			ev.push_back(m);
	}

	//------------------------------------------------------------------deal with even
	//fill-up the 'p' disjoint sets  with even numbers
	//if even numbers are not enough, use two odds and insert
	if (ev.size() >= p)
	{
		k = ev.size() - 1;
		for (i = 1; i < p; i++)
			v[i].push_back(ev[k]), k--, ev.pop_back();

		while (ev.size() && p > 0)
		{
			v[p].push_back(ev[k]);
			k--;
			ev.pop_back();
		}
	}

	else
	{
		k = ev.size() - 1; i = 1;
		while (ev.size() > 0)
		{
			v[i].push_back(ev[k]);
			k--; ev.pop_back(); i++;
		}

		k = odd.size() - 1;
		for (j = i; j <= p; j++)
		{
			if (odd.size() < 2)
			{
				printf("NO\n");
				return 0;
			}

			v[j].push_back(odd[k]); odd.pop_back(); k--;
			v[j].push_back(odd[k]); odd.pop_back(); k--;
		}
	}

	//if p==0
	//insert into one of the odds set
	//sum of all even==even, and if added with a odd, it'll eventually result in a odd
	k = ev.size() - 1;
	while (ev.size())
	{
		v[1].push_back(ev[k]);
		k--; ev.pop_back();
	}
	//------------------------------------------------------------------deal with even

	//------------------------------------------------------------------deal with odd
	if (odd.size() < (kt - p))
	{
		printf("NO\n");
		return 0;
	}

	k = odd.size() - 1;
	for (i = p + 1; i <= kt; i++)
	{
		v[i].push_back(odd[k]);
		odd.pop_back(); k--;
	}

	//if odd number of odds are summed up they give another odd
	//the k-p sets already have odd
	//they can neither be added to the even sets, nor with the odds
	//if the size is even they can be inserted in odd's
	if (odd.size() % 2)
	{
		printf("NO\n");
		return 0;
	}

	else
	{
		//if all are evens then put in the evens, else in the odds
		k = odd.size() - 1;
		while (odd.size() > 0)
		{
			v[1].push_back(odd[k]); k--; odd.pop_back();
		}

	}
	//------------------------------------------------------------------deal with odd

	if (ev.size())
	{
		printf("NO\n");
		return 0;
	}

	printf("YES\n");
	for (i = 1; i <= kt; i++)
	{
		printf("%d ", v[i].size());
		for (j = 0; j < v[i].size(); j++)
			printf("%d ", v[i][j]);

		printf("\n");
	}

	return 0;
}
