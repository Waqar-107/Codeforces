/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
#define inf 1e18
#define mod 100000007

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
    int n, q, m;

    string s;
    cin >> s;

    int l = -1, r = -1;
    char ch1 = '#', ch2 = '#';
    for(i = 0; i < s.length(); i++)
    {
        if(s[i] == '[' && ch1 == '#')
            ch1 = '[';

        else if(s[i] == ':' && ch1 == '[')
        {
            l = i;
            break;
        }
    }

    for(i = s.length() - 1; i >= 0; i--)
    {
        if(s[i] == ']' && ch2 == '#')
            ch2 = ']';

        else if(s[i] == ':' && ch2 == ']')
        {
            r = i;
            break;
        }
    }

    if(l >= r || l == -1 || r == -1)
    {
        pf(-1);
        return 0;
    }

    l++; r--;

    //count | from l-r
    int cnt = 0;
    for(i = l; i <= r; i++)
    {
        if(s[i] == '|')
            cnt++;
    }

    pf(cnt + 4);

    return 0;
}
