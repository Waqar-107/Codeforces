/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t, x;

    sf(t);
    while(t--)
    {
        sff(n, m);
        queue<int> q;

        for(i = 0; i < n; i++)
        {
            sf(k);
            q.push(k);
        }

        set<int> s;
        int cnt;
        ll ans = 0;

        for(i = 0; i < m; i++)
        {
            sf(k);
            if(s.find(k) != s.end())
                ans++, s.erase(k);

            else
            {
                cnt = s.size();
                while(q.size())
                {
                    x = q.front(); q.pop();
                    if(x != k)
                        s.insert(x), cnt++;
                    else
                        break;
                }

                ans += (cnt * 2 + 1);
            }
        }

        pfl(ans); nl;
    }


    return 0;
}

