/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100
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

ll mod = 1e9 + 7;
ll pre[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    string s;
    char ch;

    bool flag = false;

    cin >> s;

    // if more than one consecutive u or n found save it
    vector<int> vec;
    i = 0; n = s.length();
    while(i < n)
    {
        if(s[i] == 'm' || s[i] == 'w')
            flag = true;

        if(s[i] == 'u' || s[i] == 'n')
        {
            k = 1; ch = s[i];
            for(j = i + 1; j < n; j++)
            {
                if(s[j] == ch)
                    k++, i = j + 1;
                else
                    break;
            }

            if(k >= 2)
                vec.pb(k);
            else
                i++;
        }

        else
            i++;
    }

    if(flag)
    {
        pfs("0");
        return 0;
    }

    if(vec.size() == 0)
    {
        pfs("1");
        return 0;
    }

    pre[2] = 2;
    pre[3] = 3;
    for(i = 4; i < N; i++)
        pre[i] = ((pre[i - 1] % mod) + (pre[i - 2] % mod)) % mod;

    ll ans = 1;
    for(int e : vec)
    {
        ans = ((ans % mod) * (pre[e] % mod)) % mod;
    }

    pfl(ans);

    return 0;
}
