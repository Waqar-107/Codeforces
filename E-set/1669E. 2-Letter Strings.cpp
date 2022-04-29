/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 10101
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

    cin >> t;

    while(t--)
    {
        cin >> n;

        string s[n], temp;
        map<string, vector<int>> index;

        for(i = 0; i < n; i++)
            cin >> s[i], index[s[i]].push_back(i + 1);

        ll ans = 0;

        for(i = 0; i < n; i++)
        {
            // let the 2nd character vary
            temp = s[i];
            for(char ch = 'a'; ch <= 'k'; ch++)
            {
                if(ch == s[i][1]) continue;
                temp[1] = ch;

                if(index.find(temp) != index.end())
                {
                    j = upper_bound(index[temp].begin(), index[temp].end(), i + 1) - index[temp].begin();
                    ans += index[temp].size() - j;
                }
            }

            // let the 1st character vary
            temp = s[i];
            for(char ch = 'a'; ch <= 'k'; ch++)
            {
                if(ch == s[i][0]) continue;
                temp[0] = ch;

                if(index.find(temp) != index.end())
                {
                    j = upper_bound(index[temp].begin(), index[temp].end(), i + 1) - index[temp].begin();
                    ans += index[temp].size() - j;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
