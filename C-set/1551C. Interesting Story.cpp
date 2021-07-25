/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
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

    sf(t);
    while(t--)
    {
        sf(n);

        string words[n];
        int cnt[n];

        for(i = 0; i < n; i++)
            cin >> words[i];

        int ans = 0;
        for(i = 0; i < 5; i++)
        {
            memset(cnt, 0, sizeof(cnt));
            for(j = 0; j < n; j++)
            {
                for(char c : words[j])
                {
                    if(c - 'a' == i)
                        cnt[j]++;
                    else
                        cnt[j]--;
                }
            }

            k = 0; m = 0;
            sort(cnt, cnt + n, greater<int>());

            for(j = 0; j < n; j++)
            {
                if(cnt[j] + k > 0)
                    k += cnt[j], m++;
            }

            ans = max(ans, m);
        }

        pf(ans); nl;
    }

    return 0;
}

/***https://github.com/Waqar-107/Codeforces***/
