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
    string word;

    sf(t);
    while(t--)
    {
        cin >> word;

        n = word.length();
        m = -1;

        for(i = 0; i < n; i++)
        {
            if(word[i] == 'a')
            {
                m = i;
                break;
            }
        }

        j = max(-1, m - 1);
        k = min(m + 1, n);

        char expected = 'b';
        bool flag = true;

        while(j >= 0 || k < n)
        {
            if(j >= 0 && word[j] == expected)
                j--, expected++;
            else if(k < n && word[k] == expected)
                k++, expected++;
            else
            {
                flag = false;
                break;
            }
        }

        flag && m != -1 ? pfs("YES\n") : pfs("NO\n");
    }

    return 0;
}

/***https://github.com/Waqar-107/Codeforces***/
