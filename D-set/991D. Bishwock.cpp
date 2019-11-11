/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
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
    int n, m, q;

    string s[2];
    cin >> s[0] >> s[1];

    n = s[0].length();

    int cnt = 0;
    for(i = 0; i < n - 1; i++)
    {
        // 00
        // 0A
        if(s[0][i] == '0' && s[0][i + 1] == '0' && s[1][i] == '0')
        {
            cnt++;
            s[0][i] = s[0][i + 1] = s[1][i] = 'B';
        }

        // 00
        // A0
        else if(s[0][i] == '0' && s[0][i + 1] == '0' && s[1][i + 1] == '0')
        {
            cnt++;
            s[0][i] = s[0][i + 1] = s[1][i + 1] = 'B';
        }

        // A0
        // 00
        else if(s[0][i + 1] == '0' && s[1][i] == '0' && s[1][i + 1] == '0')
        {
            cnt++;
            s[0][i + 1] = s[1][i] = s[1][i + 1] = 'B';
        }

        // 0A
        // 00
        else if(s[0][i] == '0' && s[1][i] == '0' && s[1][i + 1] == '0')
        {
            cnt++;
            s[0][i] = s[1][i] = s[1][i + 1] = 'B';
        }
    }

    pf(cnt);

    return 0;
}
