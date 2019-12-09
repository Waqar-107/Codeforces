/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 310
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
    int n, m, idx;
    string s, s2;

    cin >> s;

    n = s.length();
    int cnt = 0;

    for(i = 0; i < n; i++)
    {
        if(s[i] == 'a')
            cnt++;
    }

    k = 0; idx = 0;
    for(i = 0; i < n; i++)
    {
        if(k == cnt) break;

        if(s[i] == 'a')
            k++, idx = i + 1;
        else
            s2.pb(s[i]);
    }

    k = n - idx;
    k -= s2.length();

    if(k % 2 == 0)
    {
        k /= 2; j = idx; idx += k;
        while(k > 0)
        {
            s2.pb(s[j]);
            j++; k--;
        }

        k = s.length() - 1;
        for(i = s2.length() - 1; i >= 0; i--)
        {
            if(s2[i] != s[k]){
                pfs(":("); return 0;
            }

            k--;
        }

        for(i = 0; i < idx; i++)
            cout << s[i];
    }

    else
        pfs(":(");

    return 0;
}
