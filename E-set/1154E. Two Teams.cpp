/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
#define inf 10000

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

    sff(n, k);

    pp a[n];
    for(i = 0; i < n; i++)
    {
        sf(a[i].first);
        a[i].second = i;
    }

    sort(a, a + n, greater<pp>());

    set<int> s;
    for(i = 0; i < n; i++)
        s.insert(i);

    string ans(n, '0');

    i = 0;
    m = 1;
    while(s.size())
    {
        while(!s.count(a[i].second) && i < n)
            i++;

        vector<int> vec;
        if(i >= n) break;

        auto itr = s.find(a[i].second);

        for(j = 0; j <= k; j++)
        {
            if(itr == s.begin()){
                vec.pb(*itr);
                break;
            }

            vec.pb(*itr);
            itr--;
        }

        itr = next(s.find(a[i].second));
        for(j = 0; j < k; j++)
        {
            if(itr == s.end()) break;

            vec.pb(*itr);
            itr++;
        }

        for(int e : vec)
            ans[e] = m + '0', s.erase(e);

        if(m == 1)
            m = 2;
        else
            m = 1;

        //cout<<ans;nl;
    }

    cout << ans << endl;

    return 0;
}

