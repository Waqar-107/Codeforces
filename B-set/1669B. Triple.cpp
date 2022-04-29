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

    cin >> t;

    while(t--)
    {
        cin >> n;

        map<int, int> cnt;
        for(i = 0; i < n; i++)
            cin >> m, cnt[m]++;

        int ans = -1;
        auto itr = cnt.begin();

        while(itr != cnt.end())
        {
            if(itr->second >= 3)
            {
                ans = itr->first;
                break;
            }

            itr++;
        }

        cout << ans << endl;
    }

    return 0;
}
