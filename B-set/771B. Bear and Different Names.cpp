/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 1000000007

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


    sff(n, k);
    bool a[n - k + 1];
    string s;

    for(i = 0; i < n - k + 1; i++)
    {
        cin >> s;

        if(s == "NO")
            a[i] = 0;
        else
            a[i] = 1;
    }

    vector<string> vec;
    for(i = 0; i < 26; i++)
        vec.pb(string(1, i + 'A'));

    for(i = 0; i < 26; i++)
        vec.pb(vec[i]), vec[i + 26].pb(i + 'a');

    m = 0;
    string ans[n];
    for(i = 0; i < n; i++)
        ans[i] = "";

    m = -1;
    ans[0] = vec[++m];

    for(i = 0; i < n - k + 1; i++)
    {
        if(a[i])
        {
            for(j = i + 1; j < i + k; j++)
            {
                if(ans[j].length() == 0)
                    ans[j] = vec[++m];
            }
        }

        else
        {
            for(j = i + 1; j < i + k; j++)
            {
                if(ans[j].length() == 0)
                {
                    ans[j] = ans[i];
                    break;
                }
            }

            if(n - k == i){
                for(j = i + 1; j < n; j++)
                {
                    if(ans[j].length() == 0)
                        ans[j] = ans[i];
                }

                break;
            }
        }
    }

    for(i = 0; i < n; i++)
        cout << ans[i] << " ";

    return 0;
}
