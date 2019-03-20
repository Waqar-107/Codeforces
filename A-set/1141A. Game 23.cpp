/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
#define inf 1e6

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
#define pp pair<ll , ll>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sff(n, m);

    int cnt = 0;
    while(n < m)
    {
        k = n * 6;
        if(m % k == 0 && k <= m)
            cnt+=2, n = k;
        else
            break;
    }

    while(n < m)
    {
        k = n * 3;
        if(m % k ==0 && k <= m)
            cnt++, n = k;
        else
            break;
    }

    while(n < m)
    {
        k = n * 2;
        if(m % k ==0 && k <= m)
            cnt++, n = k;
        else
            break;
    }

    if(n == m)
        pf(cnt);

    else
        pf(-1);

    return 0;
}
