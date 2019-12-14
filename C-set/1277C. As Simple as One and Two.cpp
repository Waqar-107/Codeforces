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
        vector<int> vec;

        n = s.length();
        for(i = 0; i < n; i++)
        {
            if(i + 4 < n && s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o' && s[i + 3] == 'n' && s[i + 4] == 'e')
                vec.pb(i + 2), s[i + 2] = '#';

            else if(i + 2 < n && s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o')
                vec.pb(i + 1), s[i + 1] = '#';

            else if(i + 2 < n && s[i] == 'o' && s[i + 1] == 'n' && s[i + 2] == 'e')
                vec.pb(i + 1), s[i + 1] = '#';
        }

        pf(vec.size()), nl;
        for(int e : vec)
            pf(e + 1), pfs(" ");
        nl;
    }

    return 0;
}
