/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
#define inf 1e18

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
#define pp pair<char, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, cnt;
    string s, t, z;

    sf(n);
    while(n--)
    {
        cin >> s >> t;

        m = s.length();
        cnt = 1;
        vector<pp> vec, vec2;

        for(i = 0; i < m; i++)
        {
            if(i + 1 < m)
            {
                if(s[i] == s[i + 1])
                    cnt++;
                else
                    vec.pb({s[i], cnt}), cnt = 1;
            }

            else
                vec.pb({s[i], cnt});
        }

        m = t.length();
        cnt = 1;
        for(i = 0; i < m; i++)
        {
            if(i + 1 < m)
            {
                if(t[i] == t[i + 1])
                    cnt++;
                else
                    vec2.pb({t[i], cnt}), cnt = 1;
            }

            else
                vec2.pb({t[i], cnt});
        }

        i = 0, j = 0;
        bool f = false;
        if(vec.size() == vec2.size())
        {
            f = true;
            while(i < vec.size() && j < vec2.size())
            {
                //cout<<vec2[j].second<<" "<<vec[i].second;nl;
                if(vec[i].first == vec2[j].first && vec2[j].second >= vec[i].second)
                    i++, j++;

                else
                {
                    f = false;
                    break;
                }
            }
        }


        if(f)
            pfs("YES\n");
        else
            pfs("NO\n");
    }


    return 0;
}
