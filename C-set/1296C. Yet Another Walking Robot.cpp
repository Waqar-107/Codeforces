/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 110
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

        string s;
        cin >> s;

        pp ans = make_pair(-1, n), curr = make_pair(0, 0);
        map<pp, int> vis;

        vis[curr] = 0;

        for(i = 0; i < n; i++)
        {
            if(s[i] == 'U') curr.second++;
            else if(s[i] == 'D') curr.second--;
            else if(s[i] == 'R') curr.first++;
            else curr.first--;

            // cycle found
            if(vis.count(curr))
            {
                if(i - vis[curr] + 1 < ans.second - ans.first + 1)
                    ans = {vis[curr], i};
            }

            vis[curr] = i + 1;
        }

        if(ans.first == -1) pf(-1);
        else pff(ans.first + 1, ans.second + 1);

        nl;
    }

    return 0;
}
