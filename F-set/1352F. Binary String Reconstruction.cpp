/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
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

    sf(t);
    while(t--)
    {
        int n0, n1, n2;
        string s = "";

        cin >> n0 >> n1 >> n2;

        if(n1 == 0)
        {
            // either n0 or n2 will be 0
            if(n0)
            {
                for(i = 0; i <= n0; i++)
                    pf(0);
            }

            else
            {
                for(i = 0; i <= n2; i++)
                    pf(1);
            }

            nl;
            continue;
        }

        m = 0;
        for(i = 0; i <= n1; i++)
        {
            s.pb(m + '0');
            m = !m;
        }

        // find the first 0
        k = -1;
        for(i = 0; i < s.length(); i++)
        {
            if(s[i] == '0') {
                k = i;
                break;
            }
        }

        string temp = "";
        for(i = 0; i < k; i++) temp.pb(s[i]);
        while(n0--) temp += "0";
        for(i = k; i < s.length(); i++) temp.pb(s[i]);

         // find the first 1
        k = -1;
        for(i = 0; i < temp.length(); i++)
        {
            if(temp[i] == '1') {
                k = i;
                break;
            }
        }

        s = "";
        for(i = 0; i < k; i++) s.pb(temp[i]);
        while(n2--) s += "1";
        for(i = k; i < temp.length(); i++) s.pb(temp[i]);

        cout << s << endl;
    }

    return 0;
}
