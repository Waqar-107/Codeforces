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
    string s, t;

    sf(n);
    cin >> s >> t;

    vector<int> vec1, vec2;
    for(i = 0; i < n; i++)
    {
        if(s[i] == 'a' && t[i] == 'b')
            vec1.pb(i);

        else if(s[i] == 'b' && t[i] == 'a')
            vec2.pb(i);
    }

    if(vec1.size() % 2 != vec2.size() % 2)
    {
        pf(-1);
        return 0;
    }

    vector<pp> ans;
    while(vec1.size() && vec1.size() > 1)
    {
        j = vec1.back();
        vec1.pop_back();

        k = vec1.back();
        vec1.pop_back();

        swap(s[j], t[k]);
        ans.pb({j, k});
    }

    while(vec2.size() && vec2.size() > 1)
    {
        j = vec2.back();
        vec2.pop_back();

        k = vec2.back();
        vec2.pop_back();

        swap(s[j], t[k]);
        ans.pb({j, k});
    }

    while(vec1.size() && vec2.size())
    {
        j = vec1.back();
        vec1.pop_back();

        k = vec2.back();
        vec2.pop_back();

        swap(s[j], t[j]);
        swap(s[j], t[k]);

        ans.pb({j, j});
        ans.pb({j, k});
    }

    pf(ans.size()); nl;
    for(pp e : ans)
        pff(e.first + 1, e.second + 1), nl;

    return 0;
}
