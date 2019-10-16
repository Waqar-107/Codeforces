/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
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

    int i, j;
    int n, m;
    string s;

    string vit[] = {"A", "B", "C", "AB", "AC", "BC", "ABC"};
    ll c[7], k;
    fill(c, c + 7, inf);

    sf(n);
    for(i = 0; i < n; i++)
    {
        cin >> k >> s;
        sort(s.begin(), s.end());

        for(j = 0; j < 7; j++)
        {
            if(s == vit[j])
                c[j] = min(c[j], k);
        }
    }

    ll ans = c[6];
    ans = min(ans, c[0] + c[1] + c[2]);

    ans = min(ans, c[3] + c[4]);
    ans = min(ans, c[3] + c[5]);
    ans = min(ans, c[4] + c[5]);

    ans = min(ans, c[0] + c[5]);
    ans = min(ans, c[1] + c[4]);
    ans = min(ans, c[2] + c[3]);

    if(ans >= inf)
        pf(-1);

    else
        pfl(ans);

    return 0;
}
