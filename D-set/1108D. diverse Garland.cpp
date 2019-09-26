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
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    string s;

    cin >> n >> s;

    k = 0;
    set<char> ss;
    for(i = 1; i < n; i++)
    {
        ss.insert('R'); ss.insert('G'); ss.insert('B');
        if(s[i] == s[i - 1])
        {
            k++;

            // change s[i] so that s[i] != s[i + 1]
            ss.erase(s[i]);
            if(i + 1 < n)
                ss.erase(s[i + 1]);

            s[i] = *ss.begin();
        }

        ss.clear();
    }

    cout << k << endl;
    cout << s;

    return 0;
}
