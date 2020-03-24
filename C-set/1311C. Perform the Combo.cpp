/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 101010
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

ll a[30];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    string s;

    sf(t);
    while(t--)
    {
        sff(n, m);
        cin >> s;

        int p[m];
        for(i = 0; i < m; i++) sf(p[i]);
        sort(p, p + m);

        memset(a, 0, sizeof(a));

        for(i = 0; i < n; i++)
            a[s[i] - 'a']++;

        for(i = 0; i < n; i++)
        {
            k = lower_bound(p, p + m, i + 1) - p;
            //cout<<i<<" "<<s[i]<<" "<<m-k;nl;
            if(k < m)
                a[s[i] - 'a'] += (m - k);
        }

        for(i = 0; i < 26; i++)
            pfl(a[i]), pfs(" ");

        nl;
    }

    return 0;
}
