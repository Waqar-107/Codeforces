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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, x;
    string s, p;

    cin >> s >> p;

    if(p.length() > s.length())
    {
        pf(0);
        return 0;
    }

    int q = 0;
    int a[26] = {0};
    int pat[26] = {0};

    m = p.length(), n = s.length();
    for(i = 0; i < m; i++)
    {
        pat[p[i] - 'a']++;

        if(s[i] == '?')
            q++;
        else
            a[s[i] - 'a']++;
    }

    ll cnt = 0;
    i = 0, j = m - 1;
    while(j < n)
    {
        x = 0;
        for(k = 0; k < 26; k++)
        {
            // no way to decrease so can't be a good substring
            if(a[k] > pat[k])
            {
                x = inf;
                break;
            }

            else
                x += pat[k] - a[k];
        }

        //cout<<i<<" "<<j<<" "<<q<<" "<<x<<endl,
        if(q >= x)
            cnt++;

        if(s[i] == '?') q--;
        else a[s[i] - 'a']--;
        i++;

        j++;
        if(j >= n) break;

        if(s[j] == '?') q++;
        else a[s[j] - 'a']++;
    }

    pfl(cnt);

    return 0;
}
