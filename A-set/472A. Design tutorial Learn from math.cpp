
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

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{

    int n;
    cin >> n;

    for (int i = 4;; i += 2)
    {
        if (isPrime(n - i))
            continue;
        else
        {
            cout << i << " " << n - i << endl;
            break;
        }
    }
}

int main()
{
    fastIO();

    solve();

    return 0;
}
