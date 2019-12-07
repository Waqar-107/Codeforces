/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 20
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
    int n, m, cnt = 0, idx;

    n = 4;
    int len[n];
    string s;

    for(i = 0; i < n; i++)
        cin >> s, len[i] = s.length() - 2;

    for(i = 0; i < n; i++)
    {
        k = 0; m = 0;
        for(j = 0; j < n; j++)
        {
            if(i == j) continue;

            // twice shorter
            if(len[i] * 2 <= len[j]) k++;

            else if(len[i] >= len[j] * 2) m++;
        }

        if(k == 3 || m == 3)
        {
            cnt++;
            idx = i;
        }
    }

    if(cnt == 1)
        cout << char(idx + 'A');
    else
        cout << 'C';

    return 0;
}
