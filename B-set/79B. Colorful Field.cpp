/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 40101
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>
#define mod 1000000007

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    ll x, y;

    sff(n, m);
    sff(k, t);

    set<ll> s;
    vector<ll> vec;

    while(k--)
    {
        sffl(x, y);

        x--;
        vec.pb(x * m + y);
    }

    sort(vec.begin(), vec.end());

    ll pos;
    while(t--)
    {
        sffl(x, y);

        x--;
        pos = x * m + y;

        k = 0, j = 0;
        for(int e : vec)
        {
            if(e < pos)
                k++;
            else if(e == pos)
                j = 1;
            else
                break;
        }

        pos -= k;
        pos = pos % 3;

        if(j)
            pfs("Waste\n");
        else if(pos == 1)
            pfs("Carrots\n");
        else if(pos == 2)
            pfs("Kiwis\n");
        else
            pfs("Grapes\n");

    }

    return 0;
}
