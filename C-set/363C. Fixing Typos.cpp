/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
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
    int n, m, q;
    string s;

    cin >> s;

    n = s.length();
    for(i = 0; i < n; i++)
    {
        if(i + 2 < n && s[i] == s[i + 1] && s[i + 1] == s[i + 2])
            s[i] = '#';


        else if(i + 3 < n && s[i] == s[i + 1] && s[i + 2] == s[i + 3])
        {
            // bbcccccccd => bbcd
            for(j = i + 3; j < n; j++)
            {
                if(s[j] == s[i + 2])
                    s[j] = '#';
                else
                {
                    i =  j - 1;
                    break;
                }
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(s[i] != '#')
            cout << s[i];
    }

    return 0;
}
