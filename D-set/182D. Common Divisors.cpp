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

bool patternMatch(string text, string pattern)
{
    int i = 0, j = 0;
    int n = text.length(), m = pattern.length();

    while(i < n)
    {
        if(text[i] != pattern[j]) return false;
        i++, j++;

        j = j % m;
    }

    return true;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    string s, t, mn, temp;

    cin >> s >> t;

    if(s.length() > t.length())
        swap(s, t);

    n = s.length();

    vector<int> div;
    for(i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            div.pb(i);
            if(n / i != i)
                div.pb(n / i);
        }
    }

    int ans = 0;
    for(int e : div)
    {
        temp = "";
        for(i = 0; i < e; i++) temp.pb(s[i]);
        if(patternMatch(s, temp))
        {
            if(t.length() % e == 0)
            {
                // cout<<t<<" "<<temp;nl;
                if(patternMatch(t, temp))
                    ans++;
            }
        }
    }

    pf(ans);

    return 0;
}
