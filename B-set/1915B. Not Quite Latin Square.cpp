/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 10101
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

    sf(t);

    while(t--) {
        string matrix[3];
        for(i = 0; i < 3; i++)
            cin >> matrix[i];

        bool a, b, c;
        char ans;

        for(i = 0; i < 3; i++) {
            a = false, b = false, c = false;

            for(j = 0; j < 3; j++) {
                if(matrix[i][j] == 'A') a = true;
                else if(matrix[i][j] == 'B') b = true;
                else if(matrix[i][j] == 'C') c = true;
            }

            if(!a) ans = 'A';
            else if(!b) ans = 'B';
            else if(!c) ans = 'C';
        }

        cout << ans << endl;
    }

    return 0;
}

/***https://github.com/Waqar-107/Codeforces***/
