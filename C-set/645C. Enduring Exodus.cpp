/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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

int a[N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, z;
    string s;

    sff(n, k);
    cin >> s;

    vector<int> zeroes;
    for(i = 0; i < n; i++)
    {
        if(s[i] == '0')
            zeroes.pb(i + 1);
    }

    int len, mn = inf;
    i = 0, j = k, z = 0;
    while(j < zeroes.size())
    {
        while(max(zeroes[z] - zeroes[i], zeroes[j] - zeroes[z]) > max(zeroes[z + 1] - zeroes[i], zeroes[j] - zeroes[z + 1]))
            z++;

        m = max(zeroes[z] - zeroes[i], zeroes[j] - zeroes[z]);
        mn = min(mn, m);

        i++, j++;
    }

    pf(mn);

    return 0;
}

