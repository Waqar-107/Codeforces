/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 10
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
    int u, v;
    int r1, c1, r2, c2;

    sff(r1, c1);
    sff(r2, c2);

    if(r1 == r2 && c1 == c2)
    {
        pfs("0 0 0");
        return 0;
    }

    // rook
    if(r1 == r2 || c1 == c2)
        pfs("1 ");
    else
        pfs("2 ");

    // bishop
    if((r1 + c1) % 2 != (r2 + c2) % 2)
        pfs("0 ");
    else if(r1 - c1 == r2 - c2 || r1 + c1 == r2 + c2)
        pfs("1 ");
    else
        pfs("2 ");

    // king
    pf(max(abs(r1 - r2), abs(c1 - c2)));


    return 0;
}
