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

int main()
{
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    int a[10];

    sf(t);
    while(t--)
    {
        for(i = 0; i < 10; i++)
            sf(a[i]);

        m = 1e6;
        for(i = 1; i < 10; i++)
        {
            if(a[i] < m)
                m = a[i], k = i;
        }

        string uno, dos;

        uno.pb('1');
        a[0]++;
        while(a[0]--)
            uno.pb('0');

        dos.pb(k + '0');
        while(m--)
            dos.pb(k + '0');

        if(uno.length() == dos.length())
            cout << min(uno, dos) << endl;
        else if(uno.length() < dos.length())
            cout << uno << endl;
        else
            cout << dos << endl;
    }

    return 0;
}
