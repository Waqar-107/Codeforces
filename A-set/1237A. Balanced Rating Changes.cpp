/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
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
    int n, m;

    sf(n);

    int a[n], sum = 0, ans[n];
    for(i = 0; i < n; i++)
        sf(a[i]), sum += (a[i] / 2), ans[i] = a[i] / 2;

    for(i = 0; i < n; i++)
    {
        if(sum == 0)
            break;

        if(a[i] % 2)
        {
            ans[i] = abs(a[i] / 2) + 1;
            if(a[i] < 0)
                ans[i] *= -1, sum--;
            else
                sum++;
        }
    }

    for(i = 0; i < n; i++)
        pf(ans[i]), nl;

    return 0;
}
