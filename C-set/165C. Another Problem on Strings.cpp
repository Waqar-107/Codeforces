/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    string s;

    cin >> k >> s;

    vector<int> vec;

    ll ans = 0;
    n = s.length();
    for(i = n - 1; i >= 0; i--)
    {
        if(!k)
        {
            if(s[i] == '0')
            {
                if(vec.size())
                    m = vec.back() - i - 1;
                else
                    m = n - i;

                ans += m;
            }

            else
                vec.pb(i + 1);

            continue;
        }

        if(s[i] == '1')
            vec.pb(i + 1);

        if(vec.size() < k)
            continue;
        if(vec.size() == k)
        {
            m = n;
            ans += (n - vec[0] + 1);
        }

        else
        {
            j = vec.size() - k;
            m = vec[j - 1] - vec[j];
            ans += m;
        }

        //cout << i <<" "<<ans;nl;
    }

    pfl(ans);

    return 0;
}
