/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 35
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
    int n, m;
    int a, b;

    string s;
    map<pp, int> mp;

    sf(n);
    for(i = 0; i < n; i++)
    {
        cin >> s;

        a = b = 0;
        stack<int> stk;

        m = s.length();
        for(j = 0; j < m; j++)
        {
            if(s[j] == '(')
                stk.push(1);
            else
            {
                if(stk.size()) stk.pop();
                else a++;
            }
        }

        b = stk.size();

        if(a && b){;}
        else
            mp[{a, b}]++;
    }

    auto itr = mp.begin();
    pp temp, temp2;

    int ans = 0;
    while(itr != mp.end())
    {
        temp = itr->first;
        temp2 = {temp.second, temp.first};

        if(temp.first == 0 && temp.second == 0)
        {
            ans += mp[temp] / 2;
            mp[temp] -= (mp[temp] / 2) * 2;
            itr++;
            continue;
        }

        if(!mp[temp2]){
            itr++;
            continue;
        }

        //cout<<temp.first<<" "<<temp.second;nl;
        k = mp[temp2];

        m = min(k, itr->second);
        ans += m;

        mp[temp2] -= m;
        mp[temp] -= m;

        itr++;
    }

    pf(ans);

    return 0;
}
