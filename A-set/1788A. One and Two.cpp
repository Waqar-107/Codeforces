
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
	return (a * (b / gcd(a, b)));
}

bool isPrime(int n)
{ // A number is Prime number or not.
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int factorial(int n)
{
	return n * factorial(n - 1);
}

void solve()
{

	ll n;
	cin >> n;

	ll cnt_2 = 0, cnt_1 = 0;

	vector<int> ans;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		if (x == 2)
		{
			cnt_2++;
			ans.push_back(i + 1);
		}
		else
			cnt_1++;
	}

	if (cnt_1 == n)
		cout << 1 << endl;
	else if (cnt_2 % 2)
		cout << -1 << endl;
	else
	{
		cout << ans[cnt_2 / 2 - 1] << endl;
	}
}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}
