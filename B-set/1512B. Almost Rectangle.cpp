/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 10101
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

    sf(t);
    while(t--)
    {
        sf(n);

        string mp[n];
        for(i = 0; i < n; i++)
            cin >> mp[i];

        int r[2] = { -1, -1 };
        int c[2] = { -1, -1 };

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(mp[i][j] == '*')
                {
                    if(r[0] == -1)
                        r[0] = i, c[0] = j;
                    else
                        r[1] = i, c[1] = j;
                }
            }
        }

        // same row
        if(r[0] == r[1])
        {
            if(r[0] - 1 >= 0)
                mp[r[0] - 1][c[0]] = '*', mp[r[0] - 1][c[1]] = '*';
            else
                mp[r[0] + 1][c[0]] = '*', mp[r[0] + 1][c[1]] = '*';
        }

        // same column
        else if(c[0] == c[1])
        {
            if(c[0] - 1 >= 0)
                mp[r[0]][c[0] - 1] = '*', mp[r[1]][c[0] - 1] = '*';
            else
                mp[r[0]][c[0] + 1] = '*', mp[r[1]][c[0] + 1] = '*';
        }

        // diagonal
        else
            mp[r[0]][c[1]] = '*', mp[r[1]][c[0]] = '*';

        for(i = 0; i < n; i++)
            cout << mp[i] << endl;
    }

    return 0;
}

/***https://github.com/Waqar-107/Codeforces***/
