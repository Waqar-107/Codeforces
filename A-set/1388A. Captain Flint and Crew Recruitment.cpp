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

		if (n < 31) {
			cout << "NO\n";
		} else {
			cout << "YES\n";

			if (n == 44 || n == 40 || n == 36) {
				if (n == 44) {
					cout << "6 10 15 13\n";
				} else if (n == 40) {
					cout << "6 10 15 9\n";
				} else {
					cout << "6 10 15 5\n";
				}
			} else {
				cout << "6 10 14 " << n - 30 << '\n';
			}
		}
	}

}
