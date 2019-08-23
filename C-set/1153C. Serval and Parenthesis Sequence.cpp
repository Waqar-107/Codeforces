/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 35
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
    int n, m;
    string s;

    sf(n);
    cin >> s;

    if(n % 2)
    {
        pfs(":(");
        return 0;
    }

    int a = n / 2, b = n / 2;
    for(i = 0; i < n; i++)
    {
        if(s[i] == '(')
            a--;

        else if(s[i] == ')')
            b--;
    }

    int sum = 0;
    if(s[0] == '?')
        a--, sum = 1, s[0] = '(';
    else if(s[0] == '(')
        sum = 1;
    else
        sum = -1;

    for(i = 1; i < n; i++)
    {
        if(sum <= 0 && i < n - 1){
            pfs(":(");
            return 0;
        }

        if(s[i] == '(')
            sum++;

        else if(s[i] == ')')
            sum--;

        else
        {
            if(a)
                s[i] = '(', a--, sum++;
            else
                s[i] = ')', b--, sum--;
        }
    }

    if(sum != 0)
        pfs(":(");

    else
        cout << s;

    return 0;
}
