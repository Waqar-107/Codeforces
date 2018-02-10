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
#define N 200010
#define inf 1000000

using namespace std;

bool inStack[N];

int main()
{
	//freopen("in.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int l, r;

	scanf("%d%d", &n, &k);

	vector<int> ans;
	stack<int> a;
	stack<int> s;

	memset(inStack, 0, sizeof(inStack));

	for (i = 0; i < k; i++)
	{
		scanf("%d", &m);
		ans.push_back(m);
	}

	for (i = k - 1; i >= 0; i--)
		a.push(ans[i]);

	i = 1;
	while (i<=n)
	{
		//we either take a.top or s.top ans keep it in b
		if (!a.empty())
		{
			if (!s.empty() && s.top() == i)
				i++, s.pop();

			else if (a.top() == i)
				i++, a.pop();

			else
				s.push(a.top()), a.pop(), inStack[s.top()] = 1;
		}

		else
		{
			//now we either take s.top
			//or fill a again and continue if s is not empty
			//if s is empty then we can fill a with numbers from (n-i)
			if (s.empty())
			{
				for (j = n; j >= i; j--)
					ans.push_back(j);

				break;
			}

			else
			{
				if (s.top() == i)
					i++, s.pop();

				//fill answer
				else
				{
					r = s.top();
					l = i;

					for (j = r - 1; j >= l; j--)
					{
						if (inStack[j])
						{
							printf("-1\n"); return 0;
						}

						ans.push_back(j);
					}

					i = r + 1; s.pop();
				}
			}
		}
	}

	for (i = 0; i < n; i++)
		printf("%d ", ans[i]);

	return 0;
}
