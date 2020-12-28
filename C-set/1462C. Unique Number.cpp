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

map<int, int> mp;
void solve(int num, int pos)
{
    if(pos >= 9) return;

    int sum = 0, n = 0, temp;

    temp = num | (1 << pos);
    for(int i = 0; i < 9; i++) {
        if(temp & (1 << i))
            sum += (i + 1), n = n * 10 + i + 1;
    }

    if(mp[sum]) mp[sum] = min(mp[sum], n);
    else mp[sum] = n;

    solve(num | (1 << pos), pos + 1);

    temp = num & ~(1 << pos);
    sum = 0, n = 0;
    for(int i = 0; i < 9; i++) {
        if(temp & (1 << i))
            sum += (i + 1), n = n * 10 + i + 1;
    }

    if(mp[sum]) mp[sum] = min(mp[sum], n);
    else mp[sum] = n;

    solve(num & ~(1 << pos), pos + 1);
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    solve(0, 0);

    sf(t);
    while(t--)
    {
        sf(n);

        if(mp[n])
            pf(mp[n]);
        else
            pf(-1);

        nl;
    }

    return 0;
}
