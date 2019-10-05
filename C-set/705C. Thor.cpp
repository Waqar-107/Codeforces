/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 1000000007

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
    int t, x;

    sff(n, q);

    set<pp> unread;
    set<int> app[n + 1];

    int curr = 1;
    for(i = 0; i < q; i++)
    {
        sff(t, x);

        if(t == 1)
        {
            unread.insert({curr, x});
            app[x].insert(curr);

            curr++;
        }

        else if(t == 2)
        {
            for(int e : app[x])
                unread.erase({e, x});

            app[x].clear();
        }

        else
        {
            while(unread.size())
            {
                auto itr = unread.begin();
                pp temp = *itr;
               
                if(temp.first <= x)
                    unread.erase(itr), app[temp.second].erase(temp.first);

                else
                    break;
            }
        }

        pf(unread.size()); nl;
    }

    return 0;
}
