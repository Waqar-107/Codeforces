/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 100000007

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

    sf(n);

    string z = "abc";
    string s, t;
    cin >> s >> t;

    string lg;
    do{
        for(i = 0; i < n; i++)
            lg += z;

        if(lg.find(s) == string::npos && lg.find(t) == string::npos)
        {
            pfs("YES\n");
            cout << lg << endl;
            return 0;
        }

        lg = string(n, z[0]) + string(n, z[1]) + string(n, z[2]);
        if(lg.find(s) == string::npos && lg.find(t) == string::npos)
        {
            pfs("YES\n");
            cout << lg << endl;
            return 0;
        }

        lg.clear();
    }while(next_permutation(z.begin(), z.end()));

    pfs("NO\n");

    return 0;
}
