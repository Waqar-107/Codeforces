/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 100000007

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
    string s;
    int a[11];

    cin >> n >> s;
    for(i = 1; i <= 10; i++)
        cin >> a[i];

    for(i = 0; i < n; i++)
    {
        if(s[i] - '0' < a[s[i] - '0']){
            //cout<<i<<" "<<(s[i] - '0')<<" "<<a[s[i] - '0'];nl;
            for(j = i; j < n; j++)
            {
                if(s[j] - '0' <= a[s[j] - '0'])
                    s[j] = a[s[j] - '0'] + '0';
                else break;
            }

            break;
        }
    }

    cout << s;

    return 0;
}
