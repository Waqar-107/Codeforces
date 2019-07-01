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
    int n, m, q;
    map<int, int> mp;

    sf(q);
    while(q--)
    {
       sf(n);
       mp.clear();

       for(i = 0; i < n; i++)
            sf(m), mp[m]++;

       vector<int> vec;
       auto itr = mp.begin();

       while(itr != mp.end())
       {
           vec.pb(itr->second);
           itr++;
       }

       sort(vec.begin(), vec.end(), greater<int>());

       ll ans = vec[0];
       int mx = vec[0] - 1;

       for(i = 1; i < vec.size(); i++)
       {
           if(mx < 0)
                mx = 0;

           if(vec[i] > mx)
            ans += mx, mx--;
           else
            ans += vec[i], mx = vec[i] - 1;
       }

       pfl(ans);nl;
    }

    return 0;
}
