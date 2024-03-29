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
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    string s1, s2, temp;

    sf(t);
    while(t--)
    {
        cin >> s1 >> s2;

        n = s1.length();
        m = s2.length();

        int ans = n + m;

        for(i = 0; i < n; i++)
        {
            for(j = i; j < n; j++)
            {
                temp = "";
                for(k = i; k <= j; k++)
                    temp.pb(s1[k]);

                if(s2.find(temp) != string::npos)
                    ans = min(ans, (int)(s1.length() + s2.length() - 2 * temp.length()));
            }
        }

        pf(ans); nl;
    }

    return 0;
}
