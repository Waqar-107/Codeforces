/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 510
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
#define pp pair<string, int>

using namespace std;

vector<pp> vec[5];
bool cmp(pp a, pp b)
{
    return a.second < b.second;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int ch;
    string s;

    sf(n);

    char v[] = {'a', 'e', 'i', 'o', 'u'};

    for(i = 0; i < n; i++)
    {
        cin >> s;

        m = 0;
        for(k =  0; k < s.length(); k++)
        {
            for(j = 0; j < 5; j++)
            {
                if(v[j] == s[k])
                    m++, ch = j;
            }
        }

        vec[ch].pb({s, m});
    }

    for(i = 0; i < 5; i++)
        sort(vec[i].begin(), vec[i].end(), cmp);

    vector<pp> single;
    vector<pair<string, string>> mingle;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < vec[i].size(); j++)
        {
            if(j + 1 == vec[i].size())
                single.pb(vec[i][j]);

            else if(vec[i][j].second == vec[i][j + 1].second)
                mingle.pb({vec[i][j].first, vec[i][j + 1].first}), j++;

            else
                single.pb(vec[i][j]);
        }
    }

    sort(single.begin(), single.end(), cmp);
    vector<string> ans;

    // try taking a pair of mingle and then 2 singles whose length is equal
    if(single.size())
    {
        for(i = 0; i < single.size() - 1; i++)
        {
            if(single[i].second == single[i + 1].second && mingle.size())
            {
                s = single[i].first + " " + mingle.back().first + "\n" + single[i + 1].first + " " + mingle.back().second;
                ans.pb(s);
                i++;
                mingle.pop_back();
            }
        }
    }

    // now take 2 mingles
    if(mingle.size() % 2)mingle.pop_back();
    for(i = 0; i < mingle.size(); i += 2)
    {
        s = mingle[i].first + " " + mingle[i + 1].first + "\n";
        s += mingle[i].second + " " + mingle[i + 1].second;

        ans.pb(s);
    }

    pf(ans.size()); nl;
    for(string s : ans)
        cout << s << endl;

    return 0;
}
