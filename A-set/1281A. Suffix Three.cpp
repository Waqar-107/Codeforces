/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
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
    int n, m, t;
    string s;

    sf(t);
    while(t--)
    {
        cin >> s;

        n = s.length();

        if(n >= 2 && s[n - 2] == 'p' && s[n - 1] == 'o')
            pfs("FILIPINO");
        else if(n >= 4 && s[n - 4] == 'd' && s[n - 3] == 'e' && s[n - 2] == 's' && s[n - 1] == 'u')
            pfs("JAPANESE");
        else if(n >= 4 && s[n - 4] == 'm' && s[n - 3] == 'a' && s[n - 2] == 's' && s[n - 1] == 'u')
            pfs("JAPANESE");
        else
            pfs("KOREAN");
        nl;
    }

    return 0;
}
