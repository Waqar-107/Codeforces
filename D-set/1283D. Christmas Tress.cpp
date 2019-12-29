/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
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

    sff(n, m);

    queue<pair<pp, pp>> q;

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    sort(a, a + n);
    for(i = 1; i < n; i++)
        q.push(make_pair(make_pair(a[i - 1] + 1, a[i] - 1), make_pair(a[i - 1], a[i])));


    vector<int> ans;

    pp L = {a[0] - 1, a[0]}, R = {a[n - 1] + 1, a[n - 1]};

    ll sum = 0;
    while(m)
    {
        ans.pb(L.first);
        sum += abs(L.first - L.second);
        L.first--; m--;

        if(m)
        {
            ans.pb(R.first);
            sum += abs(R.second - R.first);
            R.first++, m--;
        }

        queue<pair<pp, pp>> temp;
        while(!q.empty())
        {
            int l = q.front().first.first;
            int r = q.front().first.second;
            int ol = q.front().second.first;
            int o_r = q.front().second.second;

            q.pop();

            if(m && l <= r)
                ans.pb(l), m--, sum += abs(ol - l);

            if(m && l < r)
                ans.pb(r), m--, sum += abs(r - o_r);

            l++, r--;
            if(l <= r)
                temp.push(make_pair(make_pair(l, r), make_pair(ol, o_r)));
        }

        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
        }
    }

    pfl(sum), nl;
    for(int e : ans)
        pf(e), pfs(" ");

    return 0;
}
