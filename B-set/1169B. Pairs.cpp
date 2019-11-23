/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 301010
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
    int u, v;

    vector<pp> vec;

    sff(n, m);
    for(i = 0; i < m; i++)
    {
        sff(u, v);
        vec.pb({u, v});
    }

    vector<int> wec;
    wec.pb(vec[0].first);
    wec.pb(vec[0].second);

    for(int e : wec)
    {
        int cnt = 0;
        unordered_map<int, int> mp;

        for(i = 0; i < m; i++)
        {
            if(vec[i].first != e && vec[i].second != e)
                cnt++, mp[vec[i].first]++, mp[vec[i].second]++;
        }

        k = 0;
        for(auto itr = mp.begin(); itr != mp.end(); itr++)
        {
            if(itr->second == cnt){
                k = 1;
                break;
            }
        }

        if(k || !cnt){
            pfs("YES\n");
            return 0;
        }
    }


    pfs("NO\n");

    return 0;
}

