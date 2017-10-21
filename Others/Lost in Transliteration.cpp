/***from dust i have come, dust i will be***/

#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<vector>
#include<set>
#include<string>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 100000000

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s, t;

	scanf("%d", &n);

	set<string> ss;

	while (n--)
	{
		cin >> s;

		t.clear();

		i = s.length() - 1;
		while (i>=0)
		{
			if (s[i] == 'h')
			{
				for (j = i - 1; j >= 0; j--)
				{
					if (s[j] == 'k')
						s[j] = '#';

					else
						break;
				}
			}

			i--;
		}
		
		for (i = 0; i < s.length(); i++)
		{
			if (s[i] == 'u')
				t += "oo";

			else if (s[i] != '#')
				t.push_back(s[i]);
		}

		ss.insert(t);
	}

	printf("%d", ss.size());

	return 0;
}
