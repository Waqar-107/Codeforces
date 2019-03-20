/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
#define inf 1e6

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

vector<int> S[27];
vector<int> T[27];

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    string s, t;

    sf(n);
    cin >> s >> t;

    vector<pp> ans;
    map<int, int> ms, mt;

    for(i = 0; i < n; i++)
    {
        if(s[i] != '?')
            S[s[i] - 'a'].pb(i + 1);
        else
            S[26].pb(i + 1);

        if(t[i] != '?')
            T[t[i] - 'a'].pb(i + 1);
        else
            T[26].pb(i + 1);

        ms[s[i]]++;
        mt[t[i]]++;
    }

    //normal + normal
    for(i = 0; i < n; i++)
    {
        if(s[i] == '?')continue;

        if(mt[s[i]])
        {
            ms[s[i]]--;
            mt[s[i]]--;

            ans.pb({S[s[i] - 'a'].back(), T[s[i] - 'a'].back()});
            T[s[i] - 'a'].pop_back();
            S[s[i] - 'a'].pop_back();
        }
    }

    // ? of s + normal of t
    for(i = 0; i < n; i++)
    {
        if(t[i] == '?')continue;

        //if not processed
        if(mt[t[i]] && ms['?'])
        {
            ms['?']--;
            mt[t[i]]--;

            ans.pb({S[26].back(), T[t[i] - 'a'].back()});
            S[26].pop_back();
            T[t[i] - 'a'].pop_back();
        }
    }

    //? of t and normal of s
    for(i = 0; i < n; i++)
    {
        if(s[i] == '?')continue;

        //if not processed
        if(ms[s[i]] && mt['?'])
        {
            mt['?']--;
            ms[s[i]]--;

            ans.pb({S[s[i] - 'a'].back(), T[26].back()});
            T[26].pop_back();
            S[s[i] - 'a'].pop_back();
        }
    }

    //? + ?
    while(S[26].size() && T[26].size())
    {
        ans.pb({S[26].back(), T[26].back()});
        S[26].pop_back();
        T[26].pop_back();
    }

    pf(ans.size());
    nl;

    m = ans.size();
    for(i = 0; i < m; i++)
        pff(ans[i].first, ans[i].second), nl;

    return 0;
}
