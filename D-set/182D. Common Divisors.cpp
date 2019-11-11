/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
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

string s, t;
bool patternMatch(string text, int len)
{
    int i = 0, j = 0;
    int n = text.length();

    while(i < n)
    {
        if(text[i] != s[i % len]) return false;
        i++;
    }

    return true;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    int ans = 0;

    cin >> s >> t;

    if(s.length() > t.length())
        swap(s, t);

    n = s.length();
    for(i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(t.length() % i == 0)
            {
                if(patternMatch(s, i) && patternMatch(t, i))
                    ans++;
            }

            if(n / i != i)
            {
                k = n / i;
                 if(t.length() % k == 0)
                {
                    if(patternMatch(s, k) && patternMatch(t, k))
                        ans++;
                }
            }
        }
    }

    pf(ans);

    return 0;
}
