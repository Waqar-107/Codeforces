#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;

		ll int x = (n / 4);
		if (n % 4 != 0) {
			x++;
		}
		ll int y = n - x;

		while (y--) {
			cout << "9";
		}

		while (x--) {
			cout << "8";
		}

		cout << '\n';
	}

}
