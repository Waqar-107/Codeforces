/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 550
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
#define pp pair<int,int>

using namespace std;

struct team {
    int p, g, c;
    team(){
        p = 0;
        g = 0;
        c = 0;
    }
};

map<string, team> mp;

bool cmp(string a, string b)
{
    if(mp[a].p == mp[b].p)
    {
        if(mp[a].g - mp[a].c == mp[b].g - mp[b].c)
        {
            if(mp[a].g == mp[b].g)
                return a < b;

            return mp[a].g > mp[b].g;
        }

        return (mp[a].g - mp[a].c) > (mp[b].g - mp[b].c);
    }

    return mp[a].p > mp[b].p;
}

bool cmp2(pp a, pp b)
{
    if(a.first - a.second == b.first - b.second)
        return a.second < b.second;

    return (a.first - a.second) < (b.first - b.second);
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    string t1, t2, score;
    map<string, int> T;

    for(i = 0; i < 5; i++)
    {
        cin >> t1 >> t2 >> score;

        T[t1]++;
        T[t2]++;

        mp[t1].g += score[0] - '0';
        mp[t2].c += score[0] - '0';

        mp[t2].g += score[2] - '0';
        mp[t1].c += score[2] - '0';

        if(score[0] > score[2])
            mp[t1].p += 3;

        else if(score[0] < score[2])
            mp[t2].p += 3;

        else
            mp[t1].p++, mp[t2].p++;
    }

    vector<string> vec;
    t1 = "BERLAND";
    for(auto itr = T.begin(); itr != T.end(); itr++)
    {
        vec.pb(itr->first);

        if(itr->first != t1 && itr->second == 2)
            t2 = itr->first;
    }

    sort(vec.begin(), vec.end(), cmp);

    // does not matters if Berland win
    if(mp[vec[1]].p - 3 > mp[t1].p)
    {
        pfs("IMPOSSIBLE");
        return 0;
    }

    vector<pp> ans;

    mp[t1].p += 3;
    for(i = 1; i <= 30; i++)
    {
        mp[t1].g += i;

        for(j = 0; j < i; j++)
        {
            mp[t2].g += j;
            mp[t2].c += i;
            mp[t1].c += j;

            sort(vec.begin(), vec.end(), cmp);
            if(vec[0] == t1 || vec[1] == t1)
                ans.pb({i, j});

            mp[t2].g -= j;
            mp[t2].c -= i;
            mp[t1].c -= j;
        }

        mp[t1].g -= i;
    }

    sort(ans.begin(), ans.end(), cmp2);

    cout << ans[0].first << ":" << ans[0].second;

    return 0;
}
