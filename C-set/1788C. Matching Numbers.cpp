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

	int n;
	cin >> n;

	if (n % 2)
	{
		int temp = n * 2;
		cout << "YES" << endl;
		for (int i = 1; i <= n; i++)
		{
			cout << i << " " << temp << endl;

			temp = temp - 2;

			if (temp == n - 1)
				temp = 2 * n - 1;
		}
	}
	else
		cout << "NO" << endl;
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
