/***from dust i have come, dust i will be***/
 
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
 
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
using namespace __gnu_pbds;
 
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
 
int main()
{
    //freopen("in.txt", "r", stdin);
 
    int i, j, k;
    int n, m, t;
 
    sf(n);
 
    int a[n];
    vector<pp> vec;
    for(i = 1; i <= n; i++)
    {
        sf(m); a[i - 1] = m;
 
        // looking at right
        if(m)
            vec.pb({n - i, i});
        else
            vec.pb({i - 1, i});
    }
 
    sort(vec.begin(), vec.end(), greater<pp>());
 
    ll ans = 0;
    ordered_set s;
    for(pp e : vec)
    {
        k = s.order_of_key(e.second);
 
        if(a[e.second - 1])
            k = s.size() - k;
 
        ans += k;
        s.insert(e.second);
 
        // cout<<e.second<<" th cow done\n";
    }
 
    pfl(ans);
 
    return 0;
}
