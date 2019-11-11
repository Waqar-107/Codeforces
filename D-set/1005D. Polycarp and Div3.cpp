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
    int n, m, ans = 0;
    string s;

    cin >> s;

    n = s.length();
    int a[n];

    for(i = 0; i < n; i++)
        a[i] = (s[i] - '0') % 3;
        
    i = 0;
    while(i < n)
    {
        if(a[i] == 0)
            ans++, i++;

        else if(i + 1 < n && a[i] == 1 && a[i + 1] == 2)
            ans++, i += 2;

        else if(i + 1 < n && a[i] == 2 && a[i + 1] == 1)
            ans++, i += 2;

        else if(i + 2 < n && a[i] == 1 && a[i + 1] == 1 && a[i + 2] == 1)
            ans++, i += 3;

        else if(i + 2 < n && a[i] == 2 && a[i + 1] == 2 && a[i + 2] == 2)
            ans++, i += 3;

        else
            i++;
    }

    pf(ans);

    return 0;
}
