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
    char ch;

    sf(t);
    while(t--)
    {
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        sf(m);
        int a[m];
        for(i =0; i < m; i++)
            sf(a[i]);

        char ans[m];
        for(i = 0; i < m; i++)
            ans[i] = '#';

        vector<int> idx;

        int done = 0;
        while(done < m)
        {
            // find 0;
            idx.clear();
            for(i = 0; i < m; i++)
            {
                if(a[i] == 0 && ans[i] == '#')
                    idx.pb(i);
            }

            // check if the largest character has idx.size() number of occurrence
            while(true)
            {
                int sum = 0;
                ch = s[s.length() - 1];

                for(i = s.length() - 1; i >= 0; i--){
                    if(s[i] == ch) sum++;
                }

                if(sum >= idx.size()) break;

                while(s.length() && s[s.length() - 1] == ch) s.pop_back();
            }

            ch = s[s.length() - 1];
            for(int e : idx)
                ans[e] = ch;

            done += idx.size();

            for(i = 0; i < m; i++)
            {
                if(a[i])
                {
                    for(int e : idx)
                        a[i] -= abs(e - i);
                }
            }
            
            ch = s[s.length() - 1];
            while(s.size() && s[s.length() - 1] == ch)
                s.pop_back();
        }

        for(i = 0; i < m; i++)
            cout << ans[i];
        nl;
    }

    return 0;
}
