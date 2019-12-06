/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 10
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
    int a, b, c, d;

    sff(a, b);
    sff(c, d);

    deque<int> vec;
    deque<int> vec2;

    while(a && b)
    {
        vec.pb(0);
        vec.pb(1);

        a--, b--;
    }

    while(c && d)
    {
        vec2.pb(2);
        vec2.pb(3);

        c--, d--;
    }

    while(b && c)
    {
        vec.pb(2);
        vec.pb(1);

        b--, c--;
    }

    // 0 1 0 1 ... 0 1 2 1 2 1 + 0
    if(a) vec.pb(0), a--;

    // 1 + 0 1 0 1 0 1 ... 0 1 2 1 2 1
    if(b) vec.push_front(1), b--;

    // 2 3 2 3 2 3 + 2
    if(c) vec2.pb(2), c--;

    // 3 + 2 3 2 3 ... 2 3
    if(d) vec2.push_front(3), d--;

    for(int e : vec2)
        vec.pb(e);

    bool flag = true;
    n = vec.size();
    for(i = 1; i < n; i++)
    {
        if(abs(vec[i] - vec[i - 1]) != 1)
            flag = false;
    }

    if(a || b || c || d) flag = false;

    if(flag)
    {
        pfs("YES\n");
        for(int e : vec)
            pf(e), pfs(" ");
    }

    else
        pfs("NO");

    return 0;
}
