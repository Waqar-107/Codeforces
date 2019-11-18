/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010100
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
    int n, m;

    sf(n);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    int cnt = 0;
    map<int, int> mp;
    map<int, int> age;

    age[8] = 4, age[15] = 8, age[16] = 15, age[23] = 16, age[42] = 23;

    for(i = 0; i < n; i++)
    {
        if(a[i] == 4)
            mp[4]++;

        else
        {
            if(mp[age[a[i]]] > mp[a[i]])
                mp[a[i]]++;
        }
    }

    pf(n - mp[42] * 6);

    return 0;
}

