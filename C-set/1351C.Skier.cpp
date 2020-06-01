/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 8010
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
    string s;
    map<pair<pp, pp>, bool> vis;

    sf(t);
    while(t--)
    {
        int total = 0;

        cin >> s;
        vis.clear();

        int x = 0, y = 0;
        int px = 0, py = 0;
        vis[make_pair(make_pair(px, py), make_pair(x, y))] = true;

        n = s.length();
        for(i = 0; i < n; i++)
        {
            px = x; py = y;
            if(s[i] == 'N')
                y++;
            else if(s[i] == 'S')
                y--;
            else if(s[i] == 'W')
                x++;
            else
                x--;

            if(vis[make_pair(make_pair(px, py), make_pair(x, y))]) total++;
            else total += 5;

            vis[make_pair(make_pair(px, py), make_pair(x, y))] = true;
            vis[make_pair(make_pair(x, y), make_pair(px, py))] = true;
        }

        pf(total); nl;
    }

    return 0;
}
