/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 550
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
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    string s;

    cin >> s;

    int a[26] = {};

    n = s.length();
    for(i = 0; i < n; i++)
        a[s[i] - 'a']++;

    int odd = 0, even = 0;

    for(i = 0; i < 26; i++)
    {
        if(!a[i]) continue;

        if(a[i] % 2)
            odd++;
        else
            even++;
    }

    k = 0;
    while(even > 0 || odd > 0)
    {
        if(odd <= 1)
            break;

        even++;
        odd--;

        k = 1 - k;
    }

    if(!k)
        pfs("First");
    else
        pfs("Second");

    return 0;
}
