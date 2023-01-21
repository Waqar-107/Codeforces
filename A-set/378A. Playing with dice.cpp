
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

void solve()
{

    int a, b;
    cin >> a >> b;

    int cnt_a = 0, cnt_b = 0, cnt_d = 0;

    for (int i = 1; i <= 6; i++)
    {
        int x1 = abs(a - i);
        int x2 = abs(b - i);

        if (x1 < x2)
            cnt_a++;
        else if (x1 > x2)
            cnt_b++;
        else
            cnt_d++;
    }

    cout << cnt_a << " " << cnt_d << " " << cnt_b << endl;
}

int main()
{
    fastIO();

    solve();

    return 0;
}
