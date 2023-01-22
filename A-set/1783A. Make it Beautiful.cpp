#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        vector<int> v;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        if (v[0] == v[n - 1])
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << v[n - 1] << " ";
            for (int i = 0; i < n - 1; i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }

    return 0;
}
