/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 201010
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
    int x, y, z;

    cin >> n;
    int a[n];

    cout << "? 1 2" << endl;
    fflush(stdout);
    cin >> x;

    cout << "? 2 3" << endl;
    fflush(stdout);
    cin >> y;

    cout << "? 1 3" << endl;
    fflush(stdout);
    cin >> z;

    a[1] = (x - z + y) / 2;
    a[0] = x - a[1];
    a[2] = z - a[0];

    for(i = 4; i <= n; i++)
    {
        cout << "? "<< (i - 1) << " " << i << endl;
        fflush(stdout);

        cin >> x;

        a[i - 1] = x - a[i - 2];
    }

    cout << "!";
    for(i = 0; i < n; i++)
        cout << " " << a[i];

    cout << endl;
    fflush(stdout);

    return 0;
}
