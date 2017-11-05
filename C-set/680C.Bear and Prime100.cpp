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

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100005
#define mod 1000000007

using namespace std;

int prime[110];

void sieve()
{
	int i, j, k;
	memset(prime, -1, sizeof(prime));

	prime[0] = 0; prime[1] = 0; prime[2] = 1;

	for (i = 4; i < 110; i += 2)
		prime[i] = 0;

	for (i = 3; i < 110; i += 2)
	{
		if (prime[i] == -1)
		{
			prime[i] = 1;

			k = 2; j = i*k;
			while (j<110)
			{
				prime[j] = 0;
				k++; j = i*k;
			}
		}
	}

}

int main()
{
	//freopen("in2.txt","r",stdin);
	
	int i, j, k;
	int n, m;
	string s;
	
	sieve();

	vector<int> v; map<int, bool> mp;
	for (i = 2; i <= 100; i++)
	{
		if (prime[i])
			v.push_back(i);

		if (i==4 || i == 9 || i==25 || i==49)
			v.push_back(i);
	}

	int cnt = 0;
	for (i = 0; i < 20; i++)
	{
		cout << v[i]<<endl;
		fflush(stdout);

		cin >> s;

		if (s == "yes")
			cnt++;
	}

	if (cnt > 1)
		cout << "composite";

	else
		cout << "prime";
	
	return 0;
}
