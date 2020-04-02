/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    string x;

    sf(t);
    while(t--)
    {
        cin >> n >> x;

        string a, b;
        k = 0; j = n;

        a.pb('1'), b.pb('1');
        for(i = 1; i < n; i++)
        {
            if(x[i] == '0')
                a.pb('0'), b.pb('0');

            else if(x[i] == '1')
            {
                if(!k) a.pb('0'), b.pb('1');
                j = i + 1;
                break;
            }

            else a.pb('1'), b.pb('1');
        }

        for(i = j; i < n; i++)
            b.pb('0'), a.pb(x[i]);

        cout << a; nl;
        cout << b; nl;
    }

    return 0;
}
