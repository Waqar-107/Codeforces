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

ll dp[N];

int main()
{
	//freopen("in2.txt","r",stdin);

	ll i, j, k;
	ll n, m;
	ll a,b;

	cin >> n >> k;

	memset(dp, 0, sizeof(dp));

	i = 1;
	while (i<k)
	{
		dp[i] = 1; i++;
	}

	dp[k] = 2;

	for (i = k+1; i < N; i++)
	{
		dp[i] = (dp[i - k] % mod + dp[i - 1] % mod) % mod;
	}


	//cumulative sum
	for (i = 1; i < N; i++)
	{
		dp[i] = (dp[i] % mod + dp[i - 1] % mod)%mod;
	}
	
	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		
		k = (dp[b] - dp[a - 1]) % mod;
		if (k < 0)
			k += mod;
		cout << k << endl;
	}

	

	return 0;
}
