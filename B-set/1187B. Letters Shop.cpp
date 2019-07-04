/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100010
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
#define pp pair<char, int>

using namespace std;

int a[26];
vector<int> vec[26];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    string s, t;

    sf(n);
    cin >> s;


    for(i = 0; i < n; i++)
        vec[s[i] - 'a'].pb(i);

    sf(q);
    while(q--)
    {
        cin >> s;
        m = s.length();

        memset(a, 0, sizeof(a));
        for(i = 0; i < m; i++)
            a[s[i] - 'a']++;

        int ans = 0;
        for(i = 0; i < 26; i++)
        {
            if(a[i])
            {
               // cout<<char(a[i]+'a')<<" "<<a[i];nl;
                ans = max(ans, vec[i][a[i] - 1] + 1);
            }
        }

        pf(ans); nl;
    }

    return 0;
}
