
#include<bits/stdc++.h>

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

    int m, d;
    cin >> m >> d;

    d = 7 - d + 1;

    if (m == 2)
    {
        int cnt = 1;
        for (int i = d; i < 28; i += 7)
            cnt++;
        cout << cnt << endl;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        int cnt = 1;
        for (int i = d; i < 30; i += 7)
            cnt++;
        cout << cnt << endl;
    }
    else
    {
        int cnt = 1;
        for (int i = d; i < 31; i += 7)
            cnt++;
        cout << cnt << endl;
    }
}

int main()
{
    fastIO();

    solve();

    return 0;
}
