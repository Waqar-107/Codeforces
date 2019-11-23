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

#define white 0
#define grey 1
#define black 2

using namespace std;

int node[N];
bool cmp(pair<pp, int> a, pair<pp, int> b)
{
    if(a.first.first == b.first.first)
        return a.first.second > b.first.second;

    return a.first.first < b.first.first;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sff(n, m);
    vector<pair<pp, int>> vec;

    for(i = 0; i < m; i++)
    {
        sff(t, k);
        vec.pb({{t, k}, i});
    }

    queue<int> q;
    for(i = 1; i <= n; i++)
        node[i] = i + 2, q.push(i);

    sort(vec.begin(), vec.end(), cmp);

    vector<pp> ans(m);
    k = 1;
    int done = 1;

    for(i = 0; i < m; i++)
    {
        if(vec[i].first.second)
            ans[vec[i].second] = {k, k + 1}, k++, done++;

        else
        {
            queue<int> addLater;
            while(q.size())
            {
                if(node[q.front()] > n || node[q.front()] > done)
                {
                    addLater.push(q.front());
                    q.pop();
                }

                else break;
            }

            if(q.size())
                ans[vec[i].second] = {q.front(), node[q.front()]}, node[q.front()]++;

            else { pf(-1); return 0; }

            while(addLater.size())
                q.push(addLater.front()), addLater.pop();
        }
    }

    for(pp e : ans)
        pff(e.first, e.second), nl;

    return 0;
}

