/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 10
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
    int x, y;
    string s, pat;

    char c[] = {'a', 'b', 'c'};

    sf(t);
    while(t--)
    {
        cin >> s;
        n = s.length();

        for(i = 0; i < n; i++)
        {
            if(s[i] != '?') continue;

            for(j = 0; j < 3; j++)
            {
                s[i] = c[j];

                m = 1;
                // check if good;
                if(i - 1 >= 0 && s[i] == s[i - 1])
                    m = 0;
                else if(i + 1 < n && s[i] == s[i + 1])
                    m = 0;

                if(m) break;
                s[i] = '?';
            }
        }

        bool f = true;
        for(i = 1; i < n; i++)
        {
            if(s[i] == '?' || s[i] == s[i - 1])
                f = false;
        }

        if(f)
            cout << s << endl;
        else
            cout << -1 << endl;
    }


    return 0;
}
