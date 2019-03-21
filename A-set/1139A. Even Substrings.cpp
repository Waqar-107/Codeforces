/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
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
#define pp pair<ll , ll>

using namespace std;

bool even(char ch){
    if((ch - '0') % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    string s;

    cin >> n >> s;

    int cnt = 0;
    for(i = 0; i < n; i++)
    {
        if(even(s[i]))
            cnt++;
    }

    int a[n];
    memset(a, 0, sizeof(a));

    for(i = n - 2; i >= 0; i--)
    {
        if(even(s[i + 1]))
            a[i] = a[i + 1] + 1;
        else
            a[i] = a[i + 1];
    }

    for(i = 0; i < n; i++)
        cnt += a[i];

    pf(cnt);

    return 0;
}
