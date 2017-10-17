/***from dust i have come, dust i will be***/

#include<iostream>
#include<cstdio>
#include<set>
#include<vector>
#include<utility>
#include<map>
#include<string>
#include<algorithm>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 10000000

using namespace std;

ll sum(ll n)
{
	ll s = 0,r;

	while (n)
	{
		r = n % 10;
		n /= 10;
		s += r;
	}

	return s;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n,m;
	
	scanf("%I64d", &n);
	vector<ll> v;

	for (i = 0;i<=100; i++)
	{
		m = sum(n - i);
		m += (n - i);
		
		if (m== n)
			v.push_back(n-i);
	}
	
	sort(v.begin(), v.end());

	printf("%d\n", v.size());
	for (i = 0; i < v.size(); i++)
		printf("%I64d\n",v[i]);
	
	
	return 0;
}
