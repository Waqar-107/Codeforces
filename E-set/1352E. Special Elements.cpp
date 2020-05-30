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

int arr[N], cnt[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(t);
    while(t--)
    {
        sf(n);

        int arr[n];
        memset(cnt, 0, sizeof(cnt));

        for(i = 0; i < n; i++) sf(arr[i]);

        int sum = 0;
        for(i = 0; i < n; i++)
        {
            sum = arr[i];
            for(j = i + 1; j < n; j++)
            {
                sum += arr[j];
                if(sum < N) cnt[sum]++;
            }
        }

        int ans = 0;
        for(i = 0; i < n; i++)
        {
            if(cnt[arr[i]])
                ans++;
        }

        pf(ans), nl;
    }

    return 0;
}
