/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
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
    pp s;

    sf(n), sff(s.first, s.second);
    pp a[n];

    for(i = 0; i < n; i++)
        sff(a[i].first, a[i].second);

    map<char, int> mp;

    for(i = 0; i < n; i++)
    {
        // may go left
        if(a[i].first > s.first)
            mp['R']++;
        else if(a[i].first < s.first)
            mp['L']++;

        if(a[i].second > s.second)
            mp['U']++;
        else if(a[i].second < s.second)
            mp['D']++;
    }

    int mx = 0;
    pp ans;

    // R
    if(s.first + 1 >=0 && s.second >= 0 && mx < mp['R'])
        ans = {s.first + 1, s.second}, mx = mp['R'];

    // L
    if(s.first - 1 >=0 && s.second >= 0 && mx < mp['L'])
        ans = {s.first - 1, s.second}, mx = mp['L'];

    // U
    if(s.first >=0 && s.second + 1>= 0 && mx < mp['U'])
        ans = {s.first, s.second + 1}, mx = mp['U'];

    // D
    if(s.first >=0 && s.second - 1>= 0 && mx < mp['D'])
        ans = {s.first, s.second - 1}, mx = mp['D'];

    pf(mx), nl;
    if(mx)
        pff(ans.first, ans.second);

    return 0;
}
