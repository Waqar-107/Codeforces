/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 40101
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
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(n);

    int a[n], b[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    for(i = 0; i < n; i++)
        sf(b[i]);

    vector<pp> ans;
    for(i = 0; i < n - 1; i++)
    {
        k = -1;
        for(j = i; j < n; j++){
            k = j;
            if(a[i] == b[j])
                break;
        }

        while(k != i)
        {
            ans.pb({k - 1, k});
            swap(b[k], b[k - 1]);
            k--;
        }
    }

    pf(ans.size()), nl;
    for(pp e : ans)
        pff(e.first + 1, e.second + 1), nl;


    return 0;
}
