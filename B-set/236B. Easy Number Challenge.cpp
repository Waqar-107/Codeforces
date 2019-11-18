/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010100
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

int arr[N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int a, b, c;

    cin >> a >> b >> c;

    m = a * b * c;

    memset(arr, 0, sizeof(arr));
    for(i = 1; i <= m; i++)
    {
        for(j = i; j <= m; j += i)
            arr[j]++;
    }

    ll ans = 0, mod = 1073741824;
    for(i = 1; i <= a; i++)
    {
        for(j = 1; j <= b; j++)
        {
            for(k = 1; k <= c; k++)
            {
                ans += arr[i * j * k];
                ans = ans % mod;
            }
        }
    }

    cout << ans;

    return 0;
}

