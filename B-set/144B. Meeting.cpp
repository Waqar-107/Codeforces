/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 101010
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
    int n, m, x, y, r;
    int xa, ya, xb, yb;

    cin >> xa >> ya >> xb >> yb;

    // generate all the points
    set<pp> vec;

    int st, en;
    if(ya > yb)
        st = yb, en = ya;
    else
        st = ya, en = yb;

    for(i = st; i <= en; i++)
    {
        vec.insert({xa, i});
        vec.insert({xb, i});
    }

    if(xa > xb)
        st = xb, en = xa;
    else
        st = xa, en = xb;

    for(i = st; i <= en; i++)
    {
        vec.insert({i, ya});
        vec.insert({i, yb});
    }

    bool flag[vec.size()] = {false};

    sf(n);
    for(i = 0; i < n; i++)
    {
        cin >> x >> y >> r;

        j = 0;
        for(pp e : vec)
        {
            k = (e.first - x) * (e.first - x) + (e.second - y) * (e.second - y);

            if(k <= r * r)
                flag[j] = true;

            j++;
        }
    }

    int ans = 0;
    for(i = 0; i < vec.size(); i++)
    {
        if(!flag[i])
            ans++;
    }

    pf(ans);

    return 0;
}
