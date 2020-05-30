/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 110
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
        string s, x = "";
        vector<string> vec;
        cin >> s;

        n = s.length();
        for(i = n - 1; i >= 0; i--)
        {
            if(s[i] == '0') continue;

            x.clear();
            x.pb(s[i]);
            for(j = 0; j < n - i - 1; j++) x += "0";
            vec.pb(x);
        }

        pf(vec.size()), nl;
        for(i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
        nl;
    }

    return 0;
}
