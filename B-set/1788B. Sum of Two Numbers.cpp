
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

	string n;
	cin >> n;

	ll ans1 = 0, ans2 = 0;
	ll d1 = 0, d2 = 0;
	for (int i = 0; i < n.size(); i++)
	{

		if ((n[i] - '0') % 2)
		{

			if (d1 == d2)
			{
				d1 += (n[i] - '0') / 2;
				d2 += (n[i] - '0') / 2 + 1;
				ans1 = ans1 * 10 + (n[i] - '0') / 2;
				ans2 = ans2 * 10 + (n[i] - '0') / 2 + 1;
			}
			else if (d1 > d2)
			{
				d1 += (n[i] - '0') / 2;
				d2 += (n[i] - '0') / 2 + 1;
				ans1 = ans1 * 10 + (n[i] - '0') / 2;
				ans2 = ans2 * 10 + (n[i] - '0') / 2 + 1;
			}
			else if (d2 > d1)
			{
				d1 += (n[i] - '0') / 2 + 1;
				d2 += (n[i] - '0') / 2;
				ans1 = ans1 * 10 + (n[i] - '0') / 2 + 1;
				ans2 = ans2 * 10 + (n[i] - '0') / 2;
			}
		}
		else
		{
			ans1 = ans1 * 10 + (n[i] - '0') / 2;
			ans2 = ans2 * 10 + (n[i] - '0') / 2;
		}
	}

	cout << ans1 << " " << ans2 << endl;
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
