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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    string s;

    cin >> s;

    k = 0;
    n = s.length();

    int arr[n];
    int nxt[n];

    memset(nxt, 0, sizeof(nxt));
    memset(arr, 0, sizeof(arr));

    k = 0;
    for(i = 0; i <= n - 4; i++)
    {
        if(s[i + 3] == 'r' && s[i + 2] == 'a' && s[i + 1] == 'e' && s[i] == 'b')
            arr[i]++;
    }

    for(i = n - 4; i >= 0; i--)
    {
        nxt[i] = k;
        if(s[i + 3] == 'r' && s[i + 2] == 'a' && s[i + 1] == 'e' && s[i] == 'b')
            k = i + 3;
    }

    int cnt = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i])
            cnt += (n - (i + 3));
        else
        {
            if(nxt[i] > 0)
                cnt += (n - nxt[i]);
        }
    }

    pf(cnt);

    return 0;
}

