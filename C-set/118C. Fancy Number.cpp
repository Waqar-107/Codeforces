/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 40101
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool cmp(pp a, pp b)
{
    if(a.first == b.first)
        return a.second > b.second;

    return a.first < b.first;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    string s;

    sff(n, k);
    cin >> s;

    vector<int> vec[10];
    for(i = 0; i < n; i++)
        vec[s[i] - '0'].pb(i);

    int mn = inf;
    string ans, temp;

    // if there are at least k number of i
    vector<pp> wec;
    for(i = 0; i <= 9; i++)
    {
        wec.clear();
        for(j = 0; j <= 9; j++)
        {
            if(i != j)
                wec.pb({abs(i - j), j});
        }

        sort(wec.begin(), wec.end(), cmp);

        temp = s;
        int cnt = 0, sz = vec[i].size();

        for(pp e : wec)
        {
            m = e.second;
            if(vec[m].size() == 0) continue;

            if(m > i)
            {
                for(j = 0; j < vec[m].size(); j++)
                {
                    if(sz >= k) break;
                    cnt += e.first;
                    sz++;
                    temp[vec[m][j]] = i + '0';
                }
            }

            else
            {
                for(j = vec[m].size() - 1; j >= 0; j--)
                {
                    if(sz >= k) break;
                    cnt += e.first;
                    sz++;
                    temp[vec[m][j]] = i + '0';
                }
            }
        }

        if(cnt < mn)
            mn = cnt, ans = temp;
        if(cnt == mn)
            ans = min(ans, temp);
    }

    pf(mn), nl;
    cout << ans;

    return 0;
}
