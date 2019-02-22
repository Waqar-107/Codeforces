/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
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
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    string s, t;

    cin>>s>>t;

    n = s.length();

    vector<int> v1, v2;

    for(i = 0; i < n; i++)
    {
        if(s[i] == '4' && t[i] == '7')
            v1.pb(i);

        else if(s[i] == '7' && t[i] == '4')
            v2.pb(i);
    }

    m = min(v1.size(), v2.size());

    int cnt = 0;
    for(i = 0; i < m; i++)
    {
        cnt++;
        swap(s[v1[i]], s[v2[i]]);
    }

    for(i = 0; i < n; i++)
    {
        if(s[i] != t[i])
            cnt++;
    }

    pf(cnt);

    return 0;
}
