/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
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
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(t);
    while(t--)
    {
        sff(n, k);

        string s;
        cin >> s;
        s = "#" + s;

        int cnt = 0;
        bool f;
        for(i = 1; i <= n;)
        {
            // check if this can be made 1
            if(s[i] == '0')
            {
                f = true;
                for(j = i + 1; j <= min(i + k, n); j++){
                    if(s[j] == '0') continue;
                    f = false;
                    i = j;
                    break;
                }

                if(f) cnt++, i = i + k + 1;
                else i = j;
            }

            // if 1 then
            else i += (k + 1);
        }

        pf(cnt);
        nl;
    }

    return 0;
}
