/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
#define inf 1e18

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
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    string s;

    sf(n);
    map<char, int> mp;

    for(i = 0; i < n; i++)
    {
        cin >> s;

        mp[s[0]]++;
    }

    int cnt = 0, x, y;
    auto itr = mp.begin();
    while(itr != mp.end())
    {
        x = itr->second / 2;
        y = itr->second - x;

        //0,1 -> 0; 2 3 ... ->
        if(x == 0 || x == 1)
            x = 0;
        else
            x = (x * (x - 1)) / 2;

        if(y == 0 || y == 1)
            y = 0;
        else
            y = (y * (y - 1)) / 2;

        cnt += (x + y);
        itr++;
    }

    pf(cnt);

    return 0;
}
