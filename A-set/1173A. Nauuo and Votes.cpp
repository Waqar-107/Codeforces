/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200100
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
#define pp pair<int, int>

using namespace std;

int a[N];
int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    int x, y, z;
    set<char> s;

    sff(x, y); sf(z);
    m = x - y - z;

    for(i = 0; i <= z; i++)
    {
        k = m + 2 * i;

        if(k > 0)
            s.insert('+');
        else if(k == 0)
            s.insert('0');
        else
            s.insert('-');
    }

    if(s.size() == 1)
        cout << *s.begin();
    else
        cout << "?";

    return 0;
}
