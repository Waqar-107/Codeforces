/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 510
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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);

    int a[n];
    for(i = 0; i <n; i++)
        sf(a[i]);

    int cnt = 1;
    vector<int> vec;

    for(i = 1;i < n;i++)
    {
        if(a[i] != a[i - 1])
            vec.pb(cnt), cnt = 1;
        else
            cnt++;
    }

    vec.pb(cnt);

    int ans = 0;
    if(vec.size() > 1)
    {
        n = vec.size();
        for(i = 0; i < n - 1; i++)
            ans = max(ans, min(vec[i], vec[i + 1]));
    }

    pf(ans * 2);

    return 0;
}
