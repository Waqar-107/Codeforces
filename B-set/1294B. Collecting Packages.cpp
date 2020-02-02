/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1010
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int x, y, r, c;

    sf(t);
    while(t--)
    {
        sf(n);
        vector<pp> vec;

        for(i = 0; i < n; i++)
        {
            sff(x, y);
            vec.pb({x, y});
        }

        sort(vec.begin(), vec.end());

        x = 0, y = 0;
        string ans = "";

        k = 1;
        for(pp e : vec)
        {
            r = e.first - x;
            c = e.second - y;

            if(r < 0 || c < 0)
            {
                k = 0;
                break;
            }

            while(r--)
                ans.pb('R');
            while(c--)
                ans.pb('U');

            x = e.first;
            y = e.second;
        }

        if(k)
            cout << "YES\n" << ans << endl;
        else
            cout << "NO\n";
    }


    return 0;
}

