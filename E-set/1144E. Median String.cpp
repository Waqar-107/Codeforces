/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
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
    int n, m, x, y;
    string s, t;

    cin >> n >> s >> t;

    vector<int> sum;
    int carry = 0;

    for(i = n - 1; i >= 0; i--)
    {
        k = s[i] - 'a' + t[i] - 'a' + carry;
        sum.pb(k % 26);
        carry = k / 26;
    }

    if(carry)
        sum.pb(carry);

    reverse(sum.begin(), sum.end());

    k = 0;
    for(i = 0; i < sum.size(); i++)
    {
        k = k * 26 + sum[i];
        sum[i] = k / 2;
        k %= 2;
    }

    string ans;
    for(i = sum.size() - n; i < sum.size(); i++)
        ans.pb(sum[i] + 'a');

    cout << ans;

    return 0;
}
